#include <stdio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
if(num > 0)
  if(num %2 ==0)
    printf("\n Given number is a positive number \n Given number is EVEN");
  else 
    printf("\n Given number is a positive number \n Given number is ODD");       
else if (num < 0)
    printf("\n Given number is a Negative Number");
else if (num == 0)
    printf("\n Given number is a ZERO"); 
else
    printf("INVALID INPUT"); 
}