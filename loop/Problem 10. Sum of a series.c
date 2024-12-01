#include<stdio.h>
int main()
{  int i, n, sum=0;
 printf("enter the series:");

 while(n!=0)
 { scanf("%d", &n);
     sum +=n;
 }
 printf("sum: %d", sum);
return 0;
}
