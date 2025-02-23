#include <stdio.h>
int main() {
    int i, num, T, sq_root;
    scanf("%d", &T);
    for (i= 1; i<= T; i++) {
        scanf("%d", &num);
        sq_root=sqrt(num);
        if(sq_root*sq_root==num){
        printf("yes\n");
    }
    else
        printf("No");
    }

    return 0;
}

