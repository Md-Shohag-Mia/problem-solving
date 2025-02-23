#include <stdio.h>
int main(){
    int T, i, N, j;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf("%d",&N);
        int LSD=N%10;
        int MSD=N;
    while(MSD >10){
     MSD/=10;
    }
    int sum=MSD+LSD;
    printf("Sum = %d", sum);
}

return 0;
}
