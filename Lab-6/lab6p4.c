//4
// Printing Fibanachi Sequence.
#include <stdio.h>
int main()
{
    int i = 1;
    int a, n = 2;
    while(i<20)
    {
        printf("%d \t",i);
        a = i + n;
        i = n ;
        n = a;
    }	
}
