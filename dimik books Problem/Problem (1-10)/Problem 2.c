#include <stdio.h>
int main(){
    int i,n;
    printf("enter the num: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        if(arr[i]%2==0)
            printf("even");
        else
            printf("odd");
    }
    return 0;
}
