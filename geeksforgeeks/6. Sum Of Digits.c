#include <stdio.h>

void sumOfDigits(int a) {
    int temp = a < 0 ? -a : a;
    int sum = 0;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits of %d: %d\n", a, sum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    sumOfDigits(num);
    return 0;
}
