#include <stdio.h>
#define PAGES 2
#define ROWS 3
#define COLS 3
int main() {
    int array[PAGES][ROWS][COLS] = {
        { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }, // page 1
        { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} }  // page 2
    };
    int sum[PAGES] = {0};
    for (int p = 0; p < PAGES; p++) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                sum[p] += array[p][i][j];
            }
        }
    }
    for (int p = 0; p < PAGES; p++) {
        printf("Sum of elements on Page %d: %d\n", p + 1, sum[p]);
    }
}
