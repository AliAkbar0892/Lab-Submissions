//6
// printing serires 655536,32768, ......
#include <stdio.h>
int main()
{
	int num = 65536;
	printf("65536\t");
	for(int i=2; i<=9;i++)
	{
		num=num/i;
		printf("%d\t",num);
	}
	
}