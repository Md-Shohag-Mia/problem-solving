#include<stdio.h>
int main() {
    int start, end, num, i, sum, T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    scanf("%d", &start);
    scanf("%d", &end);
    for(num = start; num <= end; num++) {
        sum = 0;
        for(i = 1; i < num; i++) {
            if(num % i == 0) {
                sum += i;
            }
        }
        if(sum == num && num != 0) {
            printf("%d ", num);
        }
    }
    }

    printf("\n");
    return 0;
}
