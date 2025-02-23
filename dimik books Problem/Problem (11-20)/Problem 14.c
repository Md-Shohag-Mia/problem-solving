#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    getchar();
    for (int t = 1; t <= T; t++) {
        char first_line[1001], second_line;
        fgets(first_line, sizeof(first_line), stdin);
        second_line = getchar();
        getchar();
        int count = 0;
        for (int i = 0; first_line[i] != '\0'; i++) {
            if (first_line[i] == second_line) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

