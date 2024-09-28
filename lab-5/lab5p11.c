#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if (a > b)
    {
        if(a > c)
         printf("The %d is greater",a);
        else if(c > a)
         printf("The %d is greater",c);
    }
    else if (b > a)
    {
         if(b > c)
         printf("The %d is greater",b);
        else if(c > b)
         printf("The %d is greater",c);
    }
    else 
     printf("INVALID INPUT");

}