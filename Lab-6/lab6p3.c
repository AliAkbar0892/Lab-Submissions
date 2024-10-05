//3
// TO check wheter a given number is prime or composite
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x==1||x==2){
        printf("The number is prime");
    }
    else if(x==0){
        printf("The number is nither prime nor composite.");
    }
    else{
    for(int i=2; i<=x;i++){
        if (x%i == 0){
            printf("The number is composite");
            break;
        }
        else{
            printf("The number is prime");
            break;
        }
    }
    }
    
}        
    