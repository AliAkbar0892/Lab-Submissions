#include <stdio.h>
int main()
{
int age;
printf("Enter your age: \n");
scanf( "%d",&age);
if(age>=0 && age<=130)
  if(age >=0 && age <= 12)
    printf("Given age is of a child");
  else if(age>12 && age< 20)
    printf("Given age is of a teenager");
  else if (age>=20 && age < 60)
    printf("Given age is of an Adult ");
  else 
    printf("Given age is of a senior");
else
  printf("Invalid Input");  
}