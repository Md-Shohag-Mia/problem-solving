#include<stdio.h>
#include<ctype.h>
int main(){
    int i, T;
    printf("enter the number: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    char str[100];
    scanf(" %[^\n]", str);
    for(i=0; str[i] !='\0'; i++){
    if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            printf("%c", str[i]);
    }
    }
    printf("\n");
    for(i=0; str[i] !='\0'; i++){
    if(str[i]!='a' && str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u'){
            printf("%c", str[i]);
    }
    }
}
}
