#include<stdio.h>
#define size 5
int main(){
    int array[size], freq[size];
    int i,j,count;
    printf("enter the array:");
    for(i=0; i<size; i++){
        scanf("%d", &array[i]);
        freq[i]=-1;
    }
    for(i=0; i<size; i++){
            count=1;
        for(j=i+1; j<size; j++){
            if(array[i]==array[j]){
            count++;
            freq[j]=0;
            }
        }
        if(freq[i] !=0){
            freq[i]=count;
        }
    }
    for(i=0; i<size; i++){
            if(freq[i] !=0){
                printf("%d occures %d times\n ", array[i], freq[i]);
        }
}
}
