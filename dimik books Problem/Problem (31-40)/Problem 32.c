#include<stdio.h>
int main(){
    int start, end, num, i, sum, T, X, N;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
    scanf("%d %d", &X, &N);
    for(i=X; i<=N; i+=X){
        printf("%d ", i);
    }
    }
    return 0;
}
