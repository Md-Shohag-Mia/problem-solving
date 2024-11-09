#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool digit_seen[10] ={false};
    int digit_count[10]={0};
    int i,n, digit, repeated_digit=0;
    printf("enter the number:");
    scanf("%d", &n);
    while(n>0)
    {   digit=n%10;
        digit_count[digit]++;
        n/=10;
    }
    for(i=0;i<10; i++)
    {
      if(digit_count[i]>1)
    {
        repeated_digit++;
    }
    }

    printf("%d",repeated_digit);
    return 0;
}
