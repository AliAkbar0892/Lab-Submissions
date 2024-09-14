
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the first number \n");
scanf("%d",&a);
printf("Enter the second number \n");
scanf("%d",&b);
printf("before swapping the value of a is %d and value of b is %d \n",a,b);
c=a;
a=b;
b=c;
printf("after swapping the value of a is %d and value of b is %d",a,b);
}