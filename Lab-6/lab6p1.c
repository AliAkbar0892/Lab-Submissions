// do while loop is good choice for entering a veriable because it irritates one time before checking the condition. 
#include<stdio.h>
int main()
{
	int i =0;
	int n;
	do
	{
		printf("Enter a number:");
		scanf("%d",&n);
		i = i + n;
		printf(" \n Sum of the number is %d. \n ",i);
	}while(n!=0);
	printf("\n\n>>-- END --<<");
	
}