#include <stdio.h>
#include<ctype.h>

void toLowercase(char str[]) {
    int i;
    for( i=0; str[i] !='\0'; i++){
        str[i]=tolower(str[i]);
    }
    printf("lowercase of given string: %s", str);
    printf("\n");
}

int main() {
    char str[]="GeeksforGeeks";
    toLowercase(str);
    return 0;
}
