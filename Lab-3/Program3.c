
#include <stdio.h>
int main()
{
float tsalary, xrate, salary,diff;
printf("Enter your Total salary \n");
scanf("%f",&tsalary);
printf("Enter tax rate \n");
scanf("%f",&xrate);
xrate=xrate/100.0;
salary=tsalary*(1-xrate);
diff=tsalary-salary;
xrate=xrate*100.0;
printf("Your salary after tax deduction is %.3f, \n Total deduction made of your salary at rate of %.3f is %.3f",salary,xrate,diff);
}