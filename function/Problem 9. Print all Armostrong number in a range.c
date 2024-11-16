#include <stdio.h>
#include <math.h>
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }
    return (sum == originalNum);
}
void findArmstrongInRange(int start, int end) {
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isArmstrong(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}
int main() {
    int start, end;
    printf("Enter the starting number of the range: ");
    scanf("%d %d", &start, &end);
    findArmstrongInRange(start, end);
    return 0;
}
