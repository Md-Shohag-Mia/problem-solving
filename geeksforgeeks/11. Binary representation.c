#include <stdio.h>

void printBinary(int num) {
    int i, started = 0;

    for (i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            started = 1;
        }
        if (started) {
            printf("%d", (num >> i) & 1);
        }
    }
    if (!started) {
        printf("0");
    }
}

int main() {
    int num = 15;
    printf("Binary representation: ");
    printBinary(num);
    return 0;
}
