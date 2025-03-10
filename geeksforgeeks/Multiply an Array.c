#include <stdio.h>
void multiplyArray(int arr[], int n){
    int val=1;
    for(int i=0; i<n; i++){
        val=val*arr[i];
    }
    printf("product of an array: %d", val);
}

int main() {
    int arr[]={1,2,3,4,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    multiplyArray(arr,n);
    return 0;
}
