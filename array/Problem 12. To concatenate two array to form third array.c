#include<stdio.h>
int main(){
    int i, n1,n2, T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    for (int t=1; t <= T; t++){
    scanf("%d %d",&n1, &n2);
    int arr[n1+n2],arr1[n1],arr2[n2];
    int index=0;
    for(i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }
    for (i=0; i<n1; i++){
        arr[index++]=arr1[i];
    }
    for (i=0; i<n2; i++){
        arr[index++]=arr2[i];
    }
    for(i=0; i<(n1+n2); i++){
        printf("%d ", arr[i]);
    }
    }
}
