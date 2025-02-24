#include<stdio.h>
void searchElement(int array[],int n, int key){
    printf("array excepting the key elements: ");
   for(int i=0; i<n; i++){
    if(array[i]==key){
        continue;
    }
    else{
         printf("%d ", array[i]);
    }
   }
}

int main(){
    int array[]= {1,2,4,6,7,8,};
    int key;
    int n=sizeof(array)/sizeof(array[0]);
    printf("enter the searching element: ");

    scanf("%d", &key);
    searchElement(array,n,key);
    return 0;
}
