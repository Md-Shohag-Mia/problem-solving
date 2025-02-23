#include<stdio.h>

int main(){
    int num, digit, temp, flag=0;
    printf("enter binary number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        digit = temp%10;
        if(digit !=0 && digit !=1){
            flag=1;
            break;
        }
        temp/=10;
    }
    printf("Num: %d\n", num);
    if(flag==0){
        printf("number is binary");
    }
    else{
        printf("the number is not binary.");
    }
    return 0;
}
