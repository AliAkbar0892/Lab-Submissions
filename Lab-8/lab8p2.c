#include <stdio.h>
int main()
{
    int odd; 
    printf("Enter the odd number: ");
    scanf("%d",&odd);
    if(odd%2 == 0)
         odd--;    
    for (int i = odd; i > 0; i -= 2) {
        for (int j = i; j > 0; j -= 2) {
            printf("%d ", j);
        }
        printf("\n");
    }
}