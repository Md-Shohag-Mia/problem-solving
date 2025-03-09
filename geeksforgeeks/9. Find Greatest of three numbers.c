#include <stdio.h>

int GreatestNum(int num1, int num2, int num3){
        if (num1 > num2 && num1 > num3){
            return num1;
        }
        else if(num2 > num1 && num2 > num3){
                    return num2;
        }
        else{
            return num3;
}
            }
int main(){
       int num1=10, num2=34, num3=8;
       int greatestNum=GreatestNum(num1,num2,num3);
       printf("greatest number among %d, %d, %d: %d", num1, num2, num3, greatestNum);
        return 0;
    }
