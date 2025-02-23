#include<stdio.h>
int main(){
    int i, T;
    printf("enter the number: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    char str[50];
    scanf(" %[^\n]", str);
    int count=0;
    for(i=0; str[i] !='\0'; i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            count++;
        }
    }
    printf("total num of character: %d\n", count);

    }
}
