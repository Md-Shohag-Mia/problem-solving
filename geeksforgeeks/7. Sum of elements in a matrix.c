#include <stdio.h>

int sumOfMatrix(int n, int m, int mat[n][m]){
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum +=mat[i][j];
        }
    }
    return sum;
}

int main(){
    int mat[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int n=3, m=4;

    printf("Sum of Matrix: %d", sumOfMatrix(n,m,mat));
    return 0;
}
