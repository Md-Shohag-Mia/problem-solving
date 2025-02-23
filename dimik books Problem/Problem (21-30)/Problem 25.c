#include<stdio.h>
int main(){
    int i, n, T, num1, num2, gcd;
    printf("enter the number: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
      scanf("%d %d", &num1, &num2);
      int originalNum1=num1, originalNum2=num2;
       while(num2>0){
        int temp=num1%num2;
        num1=num2;
        num2=temp;

    }
    gcd = num1;
    int lcm=(originalNum1*originalNum2)/gcd;
    printf("%d",lcm);
    printf("\n");
    }
}

