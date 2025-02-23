#include<stdio.h>
int main(){
    int T, n, i, j; char str1[1001], str2[1001];
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    for (int t = 1; t <= T; t++){
    scanf("%s", str1);
    int len=strlen(str1);
    for(i=0; i<len; i++){
     str2[i]=str1[len-i-1];
    }
    str2[len]='\0';
    if(strcmp(str1, str2)==0){
        printf("Yes. it is palindrome.");
    }
    else {
        printf("No. the number is not palindrome.");
    }
    }
    return 0;
}
