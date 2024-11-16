#include <stdio.h>
int main(){
    int i,j,k,N, T, arr[10];
    scanf("%d", &T);
    for(k=1; k<=T; k++){
    scanf("%d", &N);
    for(i=0; i<N; i++){
    scanf("%d", &arr[i]);
    }

    for(i=0; i<N-1; i++){
      for(j=i+1; j<N; j++){
      if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
    }
    printf("case %d: ", k);
    for(i=0; i<N; i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
}
    return 0;
}
