#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int isStrong(int num) {
    int originalNum = num; // Preserve the original number
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return (sum == originalNum);
}
void findStrongNumbersInRange(int start, int end) {
    printf("Strong numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isStrong(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);

    printf("Enter the ending number of the range: ");
    scanf("%d", &end);
    findStrongNumbersInRange(start, end);

    return 0;
}
