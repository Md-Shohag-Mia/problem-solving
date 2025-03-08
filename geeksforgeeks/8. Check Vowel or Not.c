#include <stdio.h>

void vowelOrConsonant(char x){
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'){
        printf("the character is vowel.\n");
    }
    else{
        printf("the character is consonant.");
    }

}

int main(){
    vowelOrConsonant('a');
    vowelOrConsonant('b');
    return 0;
}
