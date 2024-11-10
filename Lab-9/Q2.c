#include<stdio.h>
void check(int x){
    if(x % 2 == 0){
        printf("%d is the even number",x);
    }else
        printf("%d is the odd number",x);
}

int main(){
    int a;
    int b;
    printf("Enter the number: ");
    scanf("%d",&a);
    check(a);
}