#include <stdio.h>
int main()
{
int n;
printf("Enter a positive integer: ");
scanf(" %d",&n);
if(n>=1 && n<=9)
 {
   switch(n)
    {
      case(1):
      printf("one for 1");
      break;
      case(2):
      printf("two for 2");
      break;      
      case(3):
      printf("tree for 3");
      break;
      case(4):
      printf("four for 4");
      break;
      case(5):
      printf("five for 5");
      break;
      case(6):
      printf("six for 6");
      break;
      case(7):
      printf("seven for 7");
      break;
      case(8):
      printf("eight for 8");
      break;
      case(9):
      printf("nine for 9");
      break;  
    }
 }
else if(n>9) 
  printf("greater then 9");
else
  printf("Invalid Input");
}