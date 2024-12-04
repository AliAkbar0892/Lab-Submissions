#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **mat1, int **mat2, int **result, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int m, n;
    
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int **mat1 = (int**)malloc(m * sizeof(int*));
    int **mat2 = (int**)malloc(m * sizeof(int*));
    int **result = (int**)malloc(m * sizeof(int*));

    for (int i = 0; i < m; i++) {
        mat1[i] = (int*)malloc(n * sizeof(int));
        mat2[i] = (int*)malloc(n * sizeof(int));
        result[i] = (int*)malloc(n * sizeof(int));
    }

    printf("Enter elements for matrix 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements for matrix 2:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(mat1, mat2, result, m, n);

    printf("The result of matrix multiplication is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        free(mat1[i]);
        free(mat2[i]);
        free(result[i]);
    }

    free(mat1);
    free(mat2);
    free(result);
    return 0;
}
