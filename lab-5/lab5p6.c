#include <stdio.h>

int main() 
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
(num == 0) ? printf("Given number is zero\n") : 
(num % 2 == 0) ? printf("Given number is even\n") : printf("Given number is odd\n");
return 0;
}
