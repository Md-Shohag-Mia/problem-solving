#include<stdio.h>
int main() {
    int x, i, num, rnum=0;
    printf("enter the value:");
    scanf("%d", &num);
         while(num>0)
            {
               x = num %10;
           rnum = rnum*10 + x;
           num = num/10;
           }

    printf("reverse: %d", rnum);
    return 0;
}
