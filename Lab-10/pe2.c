#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

double calculateDistance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Function to check if a point lies within a rectangular boundary
// The rectangle is defined by its bottom-left corner (x1, y1) and top-right corner (x2, y2)
int isPointInsideRectangle(struct Point p, int x1, int y1, int x2, int y2) {
    if (p.x >= x1 && p.x <= x2 && p.y >= y1 && p.y <= y2) {
        return 1; 
    }
    return 0;
}

int main() {
    struct Point point1 = {3, 4};
    struct Point point2 = {7, 1};
    double distance = calculateDistance(point1, point2);
    printf("Distance between point1 and point2: %.2f\n", distance);
    // Define rectangle boundaries (bottom-left corner: (1, 1), top-right corner: (6, 5))
    int x1 = 1, y1 = 1, x2 = 6, y2 = 5;
    if (isPointInsideRectangle(point1, x1, y1, x2, y2)) {
        printf("Point1 is inside the rectangle.\n");
    } else {
        printf("Point1 is outside the rectangle.\n");
    }
    if (isPointInsideRectangle(point2, x1, y1, x2, y2)) {
        printf("Point2 is inside the rectangle.\n");
    } else {
        printf("Point2 is outside the rectangle.\n");
    }

    return 0;
}
