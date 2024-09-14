#include <stdio.h>
int main()
{
float a,b,c;
char operator;
printf("Enter first number: ");
scanf(" %f",&a);
printf("Enter second number: ");
scanf(" %f",&b);
printf("Enter the operator you want to perform on these number: ");
scanf(" %c",&operator);
switch(operator)
 {
 case('+'):
   c=a+b;
   printf("You answer after %c operator is %.3f",operator,c); 
   break;
 case('-'):
   c=a-b;
   printf("You answer after %c operator is %.3f",operator,c); 
   break;
 case('*'):
   c=a*b;
   printf("You answer after %c operator is %.3f",operator,c); 
   break;
 case('/'):
  if(b==0)
    printf("Invalid value of B");
  else
    {
    c=a/b;
    printf("You answer after %c operator is %.3f",operator,c);
    } 
   break;
 default:
   printf("Invalid operator");
 }
}