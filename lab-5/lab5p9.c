#include <stdio.h>
int main()
{
 int year;
 printf("Enter the year you want to check");
 scanf("%d", &year);
 if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) 
    printf(" \n Given year is a leap year");
 else 
    printf("Given year is not a leap year\n");
}