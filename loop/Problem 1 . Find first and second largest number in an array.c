#include<stdio.h>
#define size 5
int main(){
    int array[size];
    int i, max1, max2, min;
    max1=max2;
    printf("enter the array:");
    for(i=0; i<size; i++){
        scanf("%d", &array[i]);
    }
    for(i=0; i<size; i++){
     if(array[i]>max1){
        max2=max1;
        max1=array[i];
    }
    else if(array[i]>max2 && max2<max1){
        max2=array[i];
    }
    }

    printf("First Largest: %d\n", max1);
    printf("Second Largest: %d", max2);
}
