#include <stdio.h>
int main()
{
int a=0, b=0,c=0,d=0,e=0 ,t=0;
printf("Enter the number");
scanf("%d",&a);
b=a%2;
a=a/2;
c=a%2;
a=a/2;
d=d%2;
a=a/2;
e=e%2;
a=a/2;
t=b+c+d+e;
printf("Total digits in binary representation of the number is %d",t);
}