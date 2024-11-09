#include<stdio.h>
# define size 5
int main(){
    int array[size]; int i, pos, num;

    printf("enter the array:");

    for(i=0; i<size; i++){
        scanf("%d", &array[i]);
    }
    scanf("%d %d",&num, &pos);
    for(i=size; i>=pos; i--){
    array[i]=array[i-1];
    }
    array[pos-1]=num;
    for(i=0; i<=size; i++){
        printf("%d ", array[i]);
    }
}
