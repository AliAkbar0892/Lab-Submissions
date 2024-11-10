#include<stdio.h>
#include<string.h>

void calculator(float num1, float num2, char choice){
    float result;
    switch(choice){  
    case '+':
        result = num1 + num2;
        printf("The result is %.2f + %.2f = %.1f ",num1,num2,result);
        break;
    case '-':
        result = num1 - num2;
        printf("The result is %.2f - %.2f = %.1f",num1,num2,result);
        break;
    case '*':
        result = num1 * num2;
        printf("The result is %.2f * %.2f = %.1f",num1,num2,result);
        break;
    case '/':
        if(num2 != 0){
            result = num1 / num2;
            printf("The result of %.2f / %.2f = %.2f",num1,num2,result);
        }else
            printf("Infinity");
        break;    
    default:
        printf("Invalid Choice: ");
        break;
    }       
}

int main(){
    float n1;
    float n2;
    char choice;
    printf("Enter the first number: ");
    scanf("%f",&n1);
    printf("Enter the second number: ");
    scanf("%f",&n2);
    printf("Enter the Operation to be performed: ");
    scanf(" %c",&choice);
    calculator(n1, n2, choice);
    return 0;
}
