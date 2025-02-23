#include<stdio.h>

int n aturalNum(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
    sum += i;
    }
    return sum;
}

int main(){
    int num = 10;

    printf("Sum of %d natural number: %d", num, naturalNum(num));
}
