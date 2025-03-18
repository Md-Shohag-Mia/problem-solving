#include<stdio.h>
void halfDiamondShape(int rows){
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows; j++){
                if(j<=rows-i){
                    printf(" ");
                }
            else{
                printf("*");
            }
        }printf("\n");
    }
    for(int i=rows-1; i>=1; i--){
        for(int j=1; j<=rows; j++){
                if(j<=rows-i){
                    printf(" ");
                }
            else{
                printf("*");
            }

        }printf("\n");
    }
    }
int main(){
    halfDiamondShape(4);
    getchar();
    return 0;
}
