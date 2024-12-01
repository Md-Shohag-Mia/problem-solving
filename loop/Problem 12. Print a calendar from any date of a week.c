#include<stdio.h>
int main()
{ int i=1, days=31, startday=7;
printf(" sun mon tue wed thu fri sat\n");
for(i=1; i<startday; i++)
{
    printf("    ");
}
for(i=1; i<=days; i++)
{
    printf("%3d", i);
    if((i+startday-1)%7==0)
    {
        printf("\n");
    }

}

 return 0;
}
