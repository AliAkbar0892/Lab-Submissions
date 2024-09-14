#include <stdio.h>

int main() {
    float cost, discount, diff, total;
    printf("Enter the cost of items: ");
    scanf(" %f", &cost);
    if (cost < 500)
    {
       printf("The minimum amount eligible for a discount is 500.\n");
    }
    else if (cost < 2000) 
    {
       discount=5.00;
       diff=cost*(discount/100.0);
       total=cost-diff;
       printf("total amount saved: %.3f \n Total discount: %.2f%% \n Total amount after discount: %.3f",diff,discount,total);
    } 
    else if (cost >= 2000 && cost <= 4000) 
    {
      discount=10.0;
      diff=cost*(discount/100.0);
      total=cost-diff;
      printf("total amount saved: %.3f \n Total discount: %.2f%% \n Total amount after discount: %.3f",diff,discount,total);
    }
    else if (cost > 4000 && cost <= 6000)
    {
       discount=20.0;
       diff=cost*(discount/100.0);
       total=cost-diff;
       printf("total amount saved: %.3f \n Total discount: %.2f%% \n Total amount after discount: %.3f",diff,discount,total);
        
    } 
    else 
    {
       discount=35.0;
       diff=cost*(discount/100.0);
       total=cost-diff;
       printf("total amount saved: %.3f \n Total discount: %.2f%% \n Total amount after discount: %.3f",diff,discount,total);
    }
    return 0;
}
