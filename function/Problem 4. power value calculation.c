#include<stdio.h>

int power(int x, int n)
{
    if(n==0)
        return 1;
    else
        return x*power(x, n-1);
}
int main()
{
    int x, n;
    printf(" enter the base (x) and power(n)");
    scanf("%d %d", &x, &n);
    int result = power(x, n);
    printf("result: %d", result);
}
