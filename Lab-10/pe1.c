#include <stdio.h>
void printarr(int arr[], int size) {
    if (size == 0) {
        return;
    }
    printf("%d ", arr[0]);
    printarr(arr + 1, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    printf("Array elements: ");
    printarr(arr, size);
    return 0;
}
