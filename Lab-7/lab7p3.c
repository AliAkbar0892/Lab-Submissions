
#include <stdio.h>

int main() {
    int a;
    printf("Enter array lenght: ");
    scanf("%d",&a);
    int arr[a];
    int i=0;
    while(i<a){
        printf("\nEnter index %d of array: ",i);
        scanf("%d",&arr[i]);
        i++;
    }
    int max = arr[0];
    int min = arr[0];
    for(int j=0; j<a ;j++){
        if(arr[j]>max){
            max = arr[j];
        }
        if(arr[j]<min){
            min= arr[j];
        }
    }
    printf("Maximun number is %d.\nMinimum number is %d",max,min);

    return 0;
}