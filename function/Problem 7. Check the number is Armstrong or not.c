#include<stdio.h>
int countDigits(int num){
    int count=0;
    while(num !=0){
        count++;
        num/=10;
    }
    return count;
    }
int isArmostrong(int num){
    int number=num;
    int numDigits = countDigits(num);
    int sum=0;
    while(num!=0){
            int digit=num%10;
            sum+=pow(digit, numDigits);
            num/=10;
        }
        return (sum==number);
    }
int main(){
    int number;
    printf("enter num: ");
    scanf("%d", &number);
    if(isArmostrong(number)){
        printf("the number is Armostrong");
    }
    else
    {
        printf("the number is not Aromostrong");
    }
    return 0;
}
