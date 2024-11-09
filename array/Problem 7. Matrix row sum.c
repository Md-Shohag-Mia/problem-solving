#include <stdio.h>

int main() {
    int i, j;
    int array[5][5];
    printf("Enter value for array: ");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("\n matrix:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf(" %5d ", array[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 5; i++) {
        int row_sum = 0;
        for(j = 0; j < 5; j++) {
            row_sum += array[i][j];
        }
        printf("\nSum of row %d: %d", i + 1, row_sum);
    }
for(j = 0; j < 5; j++)
{  int column_sum=0;
   for(i = 0; i < 5; i++)
   {
       column_sum += array[i][j];
   }
printf("\nSum of Column %d: %d", j + 1, column_sum);
}
    return 0;
}
