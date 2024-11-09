#include<stdio.h>

int main(){
int i, j, r1,c1,r2,c2, a[10][10], b[10][10], c[10][10], sum=0, k, result[10][10];
printf("enter num of rows and num of columns: ");
scanf("%d %d", &r1, &c1);
scanf("%d %d", &r2, &c2);
while(c1!=r2)
{
    printf("error input.\n");
}
for(i=0; i<r1; i++){
    for(j=0; j<c1; j++)
    {  printf(" a[%d][%d]: ", i, j);
        scanf("%d", &a[i][j]);
    } printf("\n");
}
for(i=0; i<r2; i++){
    for(j=0; j<c2; j++)
    {  printf(" b[%d][%d]: ", i, j);
        scanf("%d", &b[i][j]);
    } printf("\n");
}

 printf("a matrix:\n");
for(i=0; i<r1; i++){
    for(j=0; j<c1; j++)
    {
        printf("%d\t", a[i][j]);
    }printf("\n");
}
printf("b matrix:\n");
for(i=0; i<r2; i++){
    for(j=0; j<c2; j++)
    {
        printf("%d\t", b[i][j]);
    }
    printf("\n");
}
printf(" product of matrix a and matrix b:\n");
for(i=0; i<r1; i++){
    for(j=0; j<c2; j++)
    { for(k=0; k<c1; k++)
    {
       sum = sum + a[i][k]*b[k][j];
    }
       result[i][j] = sum;
       sum=0;
    }
    printf("\n");
}
printf("a*b matrix:\n");
for(i=0; i<r1; i++){
    for(j=0; j<c2; j++)
    {
        printf("%d\t", result[i][j]);
    }
    printf("\n");
}
}
