#include<stdio.h>
void findElement(int array[], int n, int key){
    for(int i=0; i<n; i++){
        if(array[i]==key){
            printf("%d", array[i]);
            break;
        }
    }
}
int main(){
    int array[] = {3,4,5,1,7,9,8};
    int n = sizeof(array)/sizeof(array[0]);
    findElement(array, n, 9);

}
