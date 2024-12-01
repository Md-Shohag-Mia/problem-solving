#include <stdio.h>
#include <string.h>

int main() {
    char number[4];
    printf("Enter a three-digit number: ");
    scanf("%3s", number);
    char reversed[4];
    reversed[0] = number[2];
    reversed[1] = number[1];
    reversed[2] = number[0];
    reversed[3] = '\0';
    printf("Reversed number: %s\n", reversed);
    return 0;
}
