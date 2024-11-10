#include<stdio.h>
#include<string.h>

void swapInteger(int x, int y){
    int z = x;
    x = y;
    y = z;
    printf("Update value of x : %d & y : %d",x,y);
    return;
}
int main(){
    int a;
    int b;
    int c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    swapInteger(a,b);
}