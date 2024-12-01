#include<stdio.h>
int main()
{  int num1, num2, num3, num4, max;
printf("enter the value:");
scanf("%d%d%d%d",&num1,&num2, &num3, &num4);
if(num1>num2&&num1>num3&&num1>num4)
{
    max=num1;
}

if(num2>num1&&num2>num3&&num2>num4)
{
    max=num2;
}
if(num3>num1&&num3>num2&&num3>num4)
{
    max=num3;
}
if(num4>num1&&num4>num2&&num4>num3)
{
    max=num4;
}
    printf("max: %d", max);
       return 0;
}
