#include<stdio.h>

int main(){
    int i, T;
    printf("enter the number: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    char str[100];
    scanf(" %[^\n]", str);
    int len=strlen(str);
    for(i=len-1; i>=0; i--){
        printf("%c", str[i]);
    } printf("\n");
}
}
