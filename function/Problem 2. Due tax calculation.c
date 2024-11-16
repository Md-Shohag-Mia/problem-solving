#include <stdio.h>

double calculate_tax(double income) {
    double tax;

    if (income <= 750) {
        tax = 0.01 * income;
    } else if (income <= 2250) {
        tax = 7.50 + 0.02 * (income - 750);
    } else if (income <= 3750) {
        tax = 37.50 + 0.03 * (income - 2250);
    } else if (income <= 5250) {
        tax = 82.50 + 0.04 * (income - 3750);
    } else if (income <= 7000) {
        tax = 142.50 + 0.05 * (income - 5250);
    } else {
        tax = 230.00 + 0.06 * (income - 7000);
    }

    return tax;
}

int main() {
    double income, tax;

    printf("Enter the amount: ");
    if (scanf("%lf", &income) != 1 || income < 0) {
        printf("Invalid input\n");
        return 1;
    }

    tax = calculate_tax(income);
    printf("Tax due: $%.2f\n", tax);

    return 0;
}
