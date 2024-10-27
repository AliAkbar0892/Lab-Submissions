#include <stdio.h>
int main()
{
    int starting_num;
    int ending_num; 
    int prime=1;
    printf("Enter starting Number: ");
    scanf("%d",&starting_num);
    printf("\nEnter Ending number: ");
    scanf("%d",&ending_num);
    if(starting_num<0){
        printf("\nInvalid Input of starting number. ");
        return 0;
    }
    if(ending_num<starting_num || ending_num<0){
        printf("\nInvalid Ending Number. ");
        return 0;    
    }
    printf("\n  ==> Prime Numbers between %d and %d <==  ",starting_num,ending_num);
    for(int p = starting_num; p <= ending_num ; p++){
        prime=1;
        if (p < 2) {
            continue;
        }

        for(int i=2; i*i <= p; i++){
            if (p % i == 0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("\n ==> %d",p);
        }
    }
}
