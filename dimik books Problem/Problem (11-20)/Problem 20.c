#include<stdio.h>

int main(){
    int i, T;
    printf("enter the number: ");
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    char str[100];
    scanf(" %[^\n]", str);
    int word=0;
    for(i=0; str[i] !='\0'; i++){
    if(str[i]==' ' || str[i]==',' || str[i]=='.' || str[i]=='!' || str[i]=='?' || str[i]=='""'){
        word++;
    }
    }
    printf("%d", word+1);
    }
}
