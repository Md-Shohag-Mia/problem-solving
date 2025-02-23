#include<stdio.h>
#include<string.h>
int main() {
    int T, n, i, j;
    char temp[100];
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        printf("Enter the number of names: ");
        scanf("%d", &n);
        char names[n][100];
        printf("Enter the names:\n");
        for (i = 0; i < n; i++) {
            scanf("%s", names[i]);
        }
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (strcmp(names[i], names[j])>0) {
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            }
        }
        printf("Case #%d: Sorted names:\n", t);
        for (i = 0; i < n; i++) {
            printf("%s\n", names[i]);
        }
    }

    return 0;
}
