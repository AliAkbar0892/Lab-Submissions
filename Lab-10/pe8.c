#include <stdio.h>

int linearSearch(int array[], int size, int target, int currentIndex) {
    if (currentIndex >= size - 1) { 
        return -1; 
    }
    if (array[currentIndex] == target) {
        return currentIndex;
    }
    return linearSearch(array, size, target, currentIndex + 1);
}

int main() {
    int array[] = {5, 8, 12, 20, 35, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int target;

    printf("Enter the target element to search for: ");
    scanf("%d", &target);
    int result = linearSearch(array, size, target, 0);
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
