#include<stdio.h>
int main(){
    int i, T, num, digit;
    printf("enter the value of num: ");
    scanf("%d", &T);
    for(i=1; i<=T; i++){
     int armNum=0;
     scanf("%d", &num);
    int count=0;
    int originalNum=num;
    while(num>0){
     count++;
     num=num/10;
    }
     num=originalNum;
     while(num>0){
     digit=num%10;
     armNum+=pow(digit,count);
     num=num/10;
    }

    printf("arm num: %d\n", armNum);
    if(armNum==originalNum){
        printf("%d is armostrong number.", originalNum);
    }
    else{
        printf("%d is not armostrong number.", originalNum);
    }
    }
}
