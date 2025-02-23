#include<stdio.h>
int main(){
    int T, ch;
    printf("enter the value of num: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    scanf("%s", &ch);
    if(ch>='A' && ch<='Z')
        printf("Character is Uppercase.");
    else if(ch>='a' && ch<='z')
        printf("Character is Lowercase.");
    else if(ch>='0' && ch<='9')
        printf("Character is number.");
    else
        printf("special character.");
    }
}
