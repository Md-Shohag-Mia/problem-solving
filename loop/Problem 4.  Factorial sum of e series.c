#include<stdio.h>
int main()
{
int i, n;
double e = 1.0;
double factorial = 1.0;
printf("enter the value:");
scanf("%d", &n);
for (i=1; i<=n; i++)
{
    factorial*=i;
    e += 1/factorial;

}
printf(" 1/%d! : %10lf\n", n, e);

return 0;
}
