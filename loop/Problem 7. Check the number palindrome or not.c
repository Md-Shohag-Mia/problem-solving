#include <stdio.h>

int main() {
    int i, n,x, rn=0;
    printf("enter the number:");
    scanf("%d", &n);
    while(n!=0)
    {
        x = n %10;
        rn = rn*10+x;
        n = n/10;
    }
    printf("rn: %d\n", rn);

rn = n;
if(rn==n)
{
    printf("reverse number is palindrome\n");
} else
{
printf("reverse is not palindrome");
}
return 0;
}
