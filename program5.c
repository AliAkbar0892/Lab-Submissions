
#include <stdio.h>
int main()
{
float P,R,T,SI;
printf("Enter Principal amount (amount should be between 100 and 1,000,000) \n");
scanf("%f",&P);
printf("Enter Rate of interest (interest should be between 5%% and 10%%) \n");
scanf("%f",&R);
printf("Enter Time rate (time rate should be between 1 and 10) \n");
scanf("%f",&T);
SI=P*R*T/100;
printf("the total simple interest is %.3f",SI);
}