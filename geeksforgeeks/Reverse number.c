#include<stdio.h>

void reverseNum(int num){
    int reversedNum=0;
    while(num>0){
        reversedNum =reversedNum*10+num%10;
        num /=10;
    }
    printf("Reverse Number: %d", reversedNum);
}
int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    reverseNum(num);
}
