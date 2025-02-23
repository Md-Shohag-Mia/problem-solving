#include<stdio.h>
int main(){
    int T, n, i,x,k;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    for (int t = 1; t <= T; t++){
    scanf("%d %d", &x, &k);
    int sum=1, power=1;
    for(i=0; i<k; i++){
        power=power*x;
        sum+=power;
    }
    printf("Sum: %d", sum);
}
}
