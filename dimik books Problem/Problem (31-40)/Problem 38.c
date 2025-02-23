#include<stdio.h>
int main(){
    int T, n, i, j, num;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    for (int t = 1; t <= T; t++){
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        for(j=1; j<=i; j++){
            printf("1 ");
        } printf("\n");
    }
     for(i=num-1; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("1 ");
        } printf("\n");
    }
}
    return 0;
}
