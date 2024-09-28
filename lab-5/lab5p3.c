# include <stdio.h>
int main()
{
int n;
printf("Enter a number: "); 
scanf("%d",&n);
if(n%5 == 0 && n%3 == 0)
 printf("The given number is divisible by both 5 and 3");
else 
 printf("The given number is not divisible by both 5 and 3");
return 0; 
}