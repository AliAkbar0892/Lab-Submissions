#include <stdio.h>
#define MAXROWS 10
#define MAXCOLS 10
int main() {
    int rows, cols;
    int array[MAXROWS][MAXCOLS], transpose[MAXCOLS][MAXROWS];

    // Input number of rows and columns
    printf("Enter the number of rows (max %d): ", MAXROWS);
    scanf("%d", &rows);
    printf("Enter the number of columns (max %d): ", MAXCOLS);
    scanf("%d", &cols);
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element index %d %d: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) { // calculating transponse
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = array[i][j];
        }
    }
    printf("\nOriginal Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the Array:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
