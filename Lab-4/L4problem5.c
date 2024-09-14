#include <stdio.h>
int main()
{
    int id;
    char name[50];
    float unit, amount, extra = 0, total;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\nEnter your customer ID: ");
    scanf("%d", &id);
    printf("\nEnter total units consumed: ");
    scanf("%f", &unit);
    printf("\nCustomer ID: %d \nCustomer Name: %s \nUnits Consumed: %.2f \n", id, name, unit);
    if (unit < 200) 
    {
        amount = unit * 16.20;
        printf("Amount charged @ Rs 16.20/unit: %.2f \n", amount);
    }
     else if (unit < 300)
    {
        amount = unit * 20.10;
        printf("Amount charged @ Rs 20.10/unit: %.2f \n", amount);
    }
     else if (unit < 500)
    {
        amount = unit * 27.10;
        printf("Amount charged @ Rs 27.10/unit: %.2f \n", amount);
    }
     else if (unit >= 500) 
    {
        amount = unit * 35.90;
        if (amount >= 18000) 
          {
            extra = amount * (15.0 / 100.0);
          }
        total = amount + extra;
        printf("Amount charged @ Rs 35.90/unit: %.2f \n", amount);
        printf("Surcharge Amount: %.2f \nNet amount paid by customer: %.2f\n", extra, total);
    }

    return 0;
}
