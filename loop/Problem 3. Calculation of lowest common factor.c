#include <stdio.h>

int main() {
    int numerator, denominator;
     printf("Enter a fraction (e.g., 6/12): ");
    scanf("%d/%d", &numerator, &denominator);
    int a = numerator;
    int b = denominator;
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    int gcd_value = a;
    numerator /= gcd_value;
    denominator /= gcd_value;
    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;
}
