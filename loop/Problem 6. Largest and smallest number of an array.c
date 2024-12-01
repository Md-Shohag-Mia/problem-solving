#include<stdio.h>
int main()
{ int i, num[4], max, min;
printf("enter the value:");
for(i=0; i<4; i++)
{
    scanf("%d", &num[i]);
}
max=num[0]; min = num[0];
for(i=0; i<4; i++)
{
   if(num[i]>max)
{
    max = num[i];
}
if(num[i]<min)
{
    min = num[i];
}
}
printf("max: %d\n", max);
printf("min: %d", min);
return 0;
}
