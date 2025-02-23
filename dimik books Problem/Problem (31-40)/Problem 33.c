#include<stdio.h>
int main(){
    int i, sum, T, a, b, c;
    printf("enter the number of test case: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    scanf("%d %d %d", &a, &b, &c);
    int found=0;
    for(i=a; i<=b; i++){
    if(i%c==0){
     printf("%d ", i);
     found=1;
    }
    }
    if(!found){
        printf("Invalid");
    }
    }
    printf("\n");
    return 0;
}

