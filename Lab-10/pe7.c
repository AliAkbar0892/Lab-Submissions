#include <stdio.h>
#define METERS_TO_KILOMETERS 0.001 

float convertToKilometers(float meters) {
    static int callCount = 0; 
    callCount++; 
    printf("Function called %d time(s).\n", callCount);
    return meters * METERS_TO_KILOMETERS; 
}

int main() {
    float meters;
    printf("Enter distance in meters: ");
    scanf("%f", &meters);
    float kilometers = convertToKilometers(meters);
    printf("%.2f meters is equal to %.2f kilometers.\n", meters, kilometers);
    printf("\nEnter another distance in meters: ");
    scanf("%f", &meters);
    kilometers = convertToKilometers(meters);
    printf("%.2f meters is equal to %.2f kilometers.\n", meters, kilometers);

    return 0;
}
