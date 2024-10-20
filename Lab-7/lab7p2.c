
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
    for(int j=a-1; j>=0 ;j--){
        printf("%d ", arr[j]);
    }

    return 0;
}