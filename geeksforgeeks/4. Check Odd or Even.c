#include<stdio.h>
void oddEvenNum(int num){
    if(num%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}

int main(){
    int num = 123;
    oddEvenNum(num);
    return 0;
}
