#include <stdio.h>

int main() {
    char firstName[21], lastName[21];


    printf("Enter a first and last name: ");
    scanf("%20s %20s", firstName, lastName);
    printf("You entered the name: %s, %c.\n", lastName, firstName[0]);

    return 0;
}
