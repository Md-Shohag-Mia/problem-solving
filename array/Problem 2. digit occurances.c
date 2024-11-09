#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool digit_seen[10] ={false};
    int digit_count[10]={0};
    int i,n, digit, repeated_digit=0;
    printf("enter the number:");
    scanf("%d", &n);
    printf("Digit:      ");
    for(i=0; i<10; i++)
    {
        printf("%d ", i);
    }
    printf("\nOcurrances: ");
    while(n>0)
    {   digit=n%10;
        digit_count[digit]++;
        n/=10;
    }
    for(i=0;i<10; i++)
    {
     printf("%d ", digit_count[i]);
    }
    return 0;
}
