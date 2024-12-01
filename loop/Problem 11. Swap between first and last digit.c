#include<stdio.h>
#include<math.h>
int main(){
    int num, swappedNumber;
    int firstNumber, lastNumber, digits;
    printf("enter any number: ");
    scanf("%d", &num);
    lastNumber=num%10;
    digits=log10(num);
    firstNumber=num/(int) pow(10,digits);
    swappedNumber=lastNumber;
    swappedNumber*=(int)pow(10,digits);
    swappedNumber+=num%(int)pow(10,digits);
    swappedNumber-=lastNumber;
    swappedNumber+=firstNumber;
    printf("Original Number: %d\n", num);
    printf("Swapped Number of first and last digits: %d", swappedNumber);
}
