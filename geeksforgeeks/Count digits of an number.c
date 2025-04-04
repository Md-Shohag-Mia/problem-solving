#include<stdio.h>
void countDigits(int num){
    int count=0; int temp=num;
    if(temp==0) count=1;
    else{
        if(temp<0) temp=-temp;
         while(temp>0){
    int digit=temp%10;
    count++;
    temp /=10;
   }
    }
    printf("number of digits in %d: %d", num, count);
}
int main(){
    int num=-1234;
    countDigits(num);
}
