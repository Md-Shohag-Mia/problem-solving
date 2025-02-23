#include<stdio.h>
int main(){
    int i,T; double X;
    printf("enter the number: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
      scanf("%lf", &X);
      int count=0;
       while(X>1.0){
        X=X/2;
        count++;
    }
    printf(" Total number of Days: %d",count);
    printf("\n");
    }
}

