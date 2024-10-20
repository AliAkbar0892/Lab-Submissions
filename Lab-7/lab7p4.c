
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
    int c = (a*(a-1))/2;
    int rep=0;
    for(int j=0; arr[i]==arr[j] ||  j < a; j++){
        if(j==a-1){
            j = 0;
            i--;
        }
        if(arr[i]==arr[j]){
            printf("The number %d is repeting",i);
        }
    }
    

    return 0;
}