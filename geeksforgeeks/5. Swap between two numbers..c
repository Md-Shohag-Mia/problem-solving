#include<stdio.h>
void swapNum(int num1, int num2){

    int temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapped:\n num1: %d num2: %d", num1, num2);
}

int main(){
    int num1 = 123, num2 = 23;
     swapNum(num1, num2);
    return 0;
}
