#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
}
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;         }
    }
    return 1;
}
void findPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}
int main() {
    int start, end;
    printf("Enter the starting number of the range: ");
    scanf("%d %d", &start, &end);
    findPrimesInRange(start, end);
    return 0;
}
