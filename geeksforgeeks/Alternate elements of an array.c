#include<stdio.h>
void getAlternates(int arr[], int n){
    for(int i=0; i<n; i +=2){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[]={2,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    getAlternates(arr,n);
}
