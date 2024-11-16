#include <stdio.h>

void selection_sort(int arr[], int n) {
        if (n <= 1) {
        return;
    }

    int maxIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }


    int temp = arr[maxIndex];
    arr[maxIndex] = arr[n - 1];
    arr[n - 1] = temp;


    selection_sort(arr, n - 1);
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
