#include<stdio.h>
#include<limits.h>

void num(int n, int arr[]) {
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("The maximum number in the array: %d\n", max);
    printf("The minimum number in the array: %d\n", min);
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the value [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    num(n, arr);
    return 0;
}
