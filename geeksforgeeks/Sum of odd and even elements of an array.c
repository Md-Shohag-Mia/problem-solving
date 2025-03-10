#include<stdio.h>

void sumOfEvenOdd(int arr[], int n){
    int evenSum=0, oddSum=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            evenSum +=arr[i];
        }
        else{
            oddSum +=arr[i];
        }
    }
    printf("Sum of Even Number: %d\n", evenSum);
    printf("Sum of Odd elements: %d", oddSum);
}
int main(){
    int n;

    scanf("%d", &n);
    printf("enter %d number of elements: ", n);
    int arr[n];
    printf("Enter the elements of an array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sumOfEvenOdd(arr,n);
    return 0;
}
