//2
// Multiple digit 
# include <stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf( "%d",&num);
	while(num<10 && num >=0)
	{
		printf("\nThe number donot have multiple digit.");
		break;
	}
	while(num>=10)
	{
		printf("\nThe number has multiple digits ");
		break;
	}
	while(num<0&&num>-10)
	{
	    printf("Number dosn't mutiple digit");
	    break;
	}
	while(num <= -10)
	{
	    printf("Number has multiple digit");
	    break;
	}
}