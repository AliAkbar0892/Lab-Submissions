#include<stdio.h>
int main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
if(n%3==0)
  printf("The number is multiple of 3: \n");
else
  printf("The number is not muttiple of three");
return 0;
}