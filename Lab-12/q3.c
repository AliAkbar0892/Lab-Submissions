#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int *arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int sum = 0;
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("The sum of the elements is: %d\n", sum);
    
    free(arr);
    
    return 0;
}
