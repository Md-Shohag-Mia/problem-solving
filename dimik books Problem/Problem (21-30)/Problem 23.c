#include<stdio.h>
int main(){
    int i, n, T;
    printf("enter the number: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
        char arr[100];
        scanf(" %[^\n]", arr);
    for(i=0; arr[i] !='\0'; i++){
    if(arr[i] >='A' && arr[i]<='Z'){
     printf("%d", arr[i]-64);
    }
}
    printf("\n");
}
}

