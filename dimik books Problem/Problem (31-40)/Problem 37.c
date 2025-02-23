#include<stdio.h>
int main(){
    int T, n, i, j, num;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    for (int t = 1; t <= T; t++){
    scanf("%d", &num);
    int rnum=0;
    int temp=num;
    while(num>0){
        int digit=num%10;
        rnum=rnum*10 + digit;
        num/=10;
 }   printf("%d", rnum);
}
    return 0;
}
