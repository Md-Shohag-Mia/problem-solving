#include<stdio.h>
int main(){
    int i, T, a, b, c;
    printf("enter the number of test case: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    scanf("%d %d %d", &a, &b, &c);
    for(i=1; i<=c; i++){
    if(i%a==0 && i%b==0){
     printf("%d ", i);
    }
    }
    }
    printf("\n");
    return 0;
}
