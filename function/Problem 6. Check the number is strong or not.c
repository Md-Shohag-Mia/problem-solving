#include<stdio.h>
int factorial(int num){
    int fact=1;
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    return fact;
}
int isStrong(int num){
    int number=num;
    int sum=0;
        while(num!=0){
            int digit=num%10;
            sum+=factorial(digit);
            num/=10;
        }
        return (sum==number);
    }
int main(){
    int number;
    printf("enter num: ");
    scanf("%d", &number);
    if(isStrong(number)){
        printf("the number is strong");
    }
    else
    {
        printf("the number is not strong");
    }
    return 0;
}
