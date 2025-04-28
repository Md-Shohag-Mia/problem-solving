#include<stdio.h>
void isPalindrome(int array[], int n){
    int flag=0;
    for(int i=0; i<n/2; i++){
        if(array[i] != array[n-i-1]){
            flag=1;
        }
    }
    if(flag==1){
        printf("is not palindrome.");
    }
    else{
        printf("is palindrome.");
    }
}
int main(){
    int array[]={1,2,3,3,2,1,1};
    int n = sizeof(array)/sizeof(array[0]);
    isPalindrome(array,n);
    getchar();
    return 0;
}
