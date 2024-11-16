#include <stdio.h>
double computePolynomial(double x) {
    return 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
}

int main() {
    double x;

    printf("Enter a value for x: ");
    scanf("%lf", &x);
    double result = computePolynomial(x);
    printf("The value of the polynomial is: %.2lf\n", result);
    return 0;
}
