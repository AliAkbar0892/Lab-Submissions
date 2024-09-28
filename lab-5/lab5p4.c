#include <stdio.h>
int main()
{
int age;
int n;
printf("Enter your age: ");
scanf( "%d",&age);
printf("\n Enter 1 if you are citizen of this country otherwise, enter 0");
scanf( "%d",&n);
if(age>=0 && age<=130)
{
 if(age>= 18 && n==1)
   printf("You are eligible to vote");
 else
   printf("Sorry, You are not eligible to vote.");
}
else
 printf("Invalid Input");
}