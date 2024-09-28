#include <stdio.h>

int main() {
    int age;
    float income;
    int creditScore;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf(" \nEnter your income: ");
    scanf("%f", &income);
    printf(" \n Enter your credit score: ");
    scanf("%d", &creditScore);
    if (age >= 18 && income >= 25000 && creditScore >= 600) 
        printf("You are eligible for the loan.");
    else 
        printf("You are not eligible for the loan.");

    return 0;
}
