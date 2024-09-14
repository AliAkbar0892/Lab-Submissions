
#include <stdio.h>
int main()
{
float fueleff, costab, consumeab;
do {
        printf("Enter the fuel efficiency");
        scanf("%f", &fueleff);
        if (fueleff <= 0) 
        {
            printf("Invalid input. Fuel efficiency must be a positive value.\n");
        }
    } while (fueleff <= 0);
int distance=1207;
consumeab=distance/fueleff;
float rateab=118.00;
costab=rateab*consumeab;
float costba, consumeba;
consumeba=consumeab;
float rateba=123.00;
costba=rateba*consumeba;
float consumet, costt;
consumet=consumeab+consumeba;
costt=costab+costba;
printf("total fuel cost from point a to b is %.3f rupees and total fuel cost from point b to a is %.3frupees.Total fuel cost from a to b and back is %.3frupees \n total fuel consumed from point a to b and back is %.3fliters.",costab,costba,costt,consumet);
}

