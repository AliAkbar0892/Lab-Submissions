#include <stdio.h>
int main()
{
char ch;
printf("Enter charcter you want to check: \n");
scanf(" %c",&ch);
if(ch>='A' && ch<='Z')
 printf("The character is capital alphabet");
else if(ch>='a' && ch<='z')
 printf("The character is a small alphabet");
else if(ch>='0' && ch<='9')
 printf("The character is a numeric digit");
else
 printf("The given character is a special symbol");
}