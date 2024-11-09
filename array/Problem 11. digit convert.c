#include <stdio.h>
#define MAX_LENGTH 15

char letterToDigit(char letter) {
    letter = toupper(letter);
    if (letter >= 'A' && letter <= 'C') return '2';
    if (letter >= 'D' && letter <= 'F') return '3';
    if (letter >= 'G' && letter <= 'I') return '4';
    if (letter >= 'J' && letter <= 'L') return '5';
    if (letter >= 'M' && letter <= 'O') return '6';
    if (letter >= 'P' && letter <= 'S') return '7';
    if (letter >= 'T' && letter <= 'V') return '8';
    if (letter >= 'W' && letter <= 'Z') return '9';
    return letter;
}

int main() {
    char phoneNumber[MAX_LENGTH + 1];
    char numericForm[MAX_LENGTH + 1];

    printf("Enter phone number: ");
    scanf("%15s", phoneNumber);

    for (int i = 0; phoneNumber[i] != '\0'; i++) {
        numericForm[i] = letterToDigit(phoneNumber[i]);
    }

    printf("In numeric form: %s\n", numericForm);

    return 0;
}
