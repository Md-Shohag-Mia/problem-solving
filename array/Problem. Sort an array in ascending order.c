//sort an array ascending or descending order
#include<stdio.h>
#define N 10
int main(){
    int arr[10]; int i, j, temp;
    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
}
    for(i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
}
