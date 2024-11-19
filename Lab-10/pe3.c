#include <stdio.h>
#define MAX_TEMP 35

void checktemp(int temperature) {
    static int count = 0;
    if (temperature > MAX_TEMP) {
        count++;
        printf("Temperature %d°C exceeds the limit of %d°C!\n", temperature, MAX_TEMP);
    } else {
        printf("Temperature %d°C is within the allowable limit.\n", temperature);
    }
    printf("Number of times the temperature exceeded the limit: %d\n", count);
}

int main() {
    int temperature;
    printf("Enter temperature (in Celsius): ");
    while (scanf("%d", &temperature) == 1) {
        checktemp(temperature);
        printf("Enter temperature (in Celsius) or any non-numeric input to stop: ");
    }

    printf("Program ended.\n");
    return 0;
}
