#include<stdio.h>
int main(){
    int i,j,n, T, num, arr[50], sorted;
    printf("enter the value of num: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    scanf("%d", &n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    sorted=1;
    for(j=0; j<n; j++){
        if(arr[j]<arr[j-1]){
           sorted=0;
           break;
        }
      }
      if(sorted==0)
        printf("array is not sorted");
      else
        printf("array is sorted");
}
}
