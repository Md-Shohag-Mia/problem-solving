#include <stdio.h>
int MagicSquare(int n, int magicSquare[n][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            magicSquare[i][j]=0;
        }
    }
    int num=1;
    int row=0;
    int col=n/2;
    while(num<=n*n)
    {
        magicSquare[row][col]=num++;
        int newRow=(row-1+n)%n;
        int newCol=(col+1)%n;

        if(magicSquare[newRow][newCol]!=0)
        {
            newRow=(row+1)%n;
            newCol=col;
        }
        row=newRow;
        col=newCol;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%3d", magicSquare[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int i, j, n;
    printf("enter the magic square size (n):");
    scanf("%d", &n);
    if(n<1||n>99||n%2==0)
    {
        printf("invalid");
        return 1;
    }

    int magicSquare[n][n];
    MagicSquare(n, magicSquare);
    return 0;
}
