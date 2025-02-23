#include <stdio.h>
int main() {
    int T,i, j, num;
    scanf("%d", &T);
    for (i= 1; i<= T; i++) {
        scanf("%d",&num);
        int fact=1;
        for(j=2; j<=num; j++){
         fact*=j;
        }
         printf("Factorial value: %d\n", fact);
    }

    return 0;
}

