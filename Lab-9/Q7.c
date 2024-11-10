#include <stdio.h>
#include <math.h>

void checkPrime(int number) {
    if (number < 2) {
        printf("%d is not a prime number (it is less than 2)\n", number);
        return;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            printf("%d is not a prime number (divisible by %d)\n", number, i);
            return;
        }
    }
    printf("%d is a prime number\n", number);
}

int main() {
    int number;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &number);
    checkPrime(number);
    return 0;
}
