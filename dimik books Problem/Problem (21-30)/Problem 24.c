#include<stdio.h>
int main(){
    int i, n, T, arr[10];
    printf("enter the number: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    scanf("%d",&n);
    for(i=0; i<n; i++){
      scanf("%d", &arr[i]);
    } printf("\n");
    for(i=0; i<n; i+=2){
      printf("%d", arr[i]);
    } printf("\n");
    }
}

