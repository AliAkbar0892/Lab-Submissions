#include<stdio.h>
int product(int num1, int num2){
    int p = num1 * num2;
    return p;
}
int main() { 
    int num1;
    int num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    int p = product(num1,num2);
    printf("The product of %d x %d: %d",num1,num2,p);
}