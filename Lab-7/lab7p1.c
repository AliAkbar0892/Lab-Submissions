
#include <stdio.h>

int main() {
    int a;
    printf("Enter array lenght: ");
    scanf("%d",&a);
    int arr[a];
    int i=0;
    while(i<a){
        printf("\nEnter %d index of array: ",i);
        scanf("%d",&arr[i]);
        i++;
    }
    int sum = 0;
    for(int j=0; j<a ;j++){
        sum = sum + arr[j];
    }
    printf("\nSum of the values of array is %d",sum);

    return 0;
}