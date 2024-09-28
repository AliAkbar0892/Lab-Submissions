#include <stdio.h>
int main()
{
int a,b;
printf("Enter your first number: ");
scanf("%d", &a);
printf("Enter your second number: ");
scanf("%d", &b);
a > b ? printf("First numer is greater ten secnd.\n") : printf("Second number is greatr");
return 0;
}