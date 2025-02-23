#include<stdio.h>
int main(){
    int i, T, num;
    printf("enter the value of num: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    scanf("%d", &num);
    int sum=0;
    for(i=1; i<num; i++){
    if(num%i==0){
        sum+=i;
    }
}
    printf("Sum: %d\n", sum);
    if(num==sum) printf("Perfect Number:");
    else printf("Not perfect number.");
}
}
