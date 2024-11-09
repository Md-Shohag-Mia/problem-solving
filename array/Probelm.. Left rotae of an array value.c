#include <stdio.h>
#define size 8

void rotateOnce(int arr[], int size) {
    int i;
    int temp = arr[0];
    for (i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

void rotate_left(int arr[], int size, int n) {
    int i;
    for (i = 0; i < n; i++) {
        rotateOnce(arr, size);
    }
}

int main() {
    int arr[size], i;
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    rotate_left(arr, size, 2);
    printf("Array after rotation: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
