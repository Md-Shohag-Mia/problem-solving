 #include <stdio.h>
int main() {
    int T,i, j, num;
    scanf("%d", &T);
    for (i= 1; i<= T; i++) {
        scanf("%d",&num);
        int fact=1, zero_count=0;
    for(j=1; j<=num; j++){
        fact*=j;
    }
        while(fact>0){
         int mod=fact%10;
         if(mod==0)
            zero_count++;
            else break;
            fact/=10;
        }
        printf("Number of zero: %d\n", zero_count);
        }
    }

