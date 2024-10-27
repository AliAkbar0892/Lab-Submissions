#include <stdio.h>
int main()
{
    int matrix[3][3]; // matrix input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter value of matrix indexs for %d and %d:  ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("|");
    for(int i=0; i<3; i++){  // matix output
        for(int j=0; j<3; j++){
            printf(" %d ",matrix[i][j]);
        }
        printf("|\n|");
    }
    int smallrow0=matrix[0][0];  // finding smallest value in row1.
    for(int i=0; i<1; i++){
        for(int j=0; j<3; j++){
            if(smallrow0>matrix[i][j]){
                smallrow0=matrix[i][j];
            }
        }
    }
    int smallrow1=matrix[1][0];  // smallest value in row 2.
    for(int i=1; i<2; i++){
        for(int j=0; j<3; j++){
            if(smallrow1>matrix[i][j]){
                smallrow1=matrix[i][j];
            }
        }
    }
    int smallrow2=matrix[2][0];  // smalllest value in row 3.
    for(int i=2; i<3; i++){
        for(int j=0; j<3; j++){
            if(smallrow2>matrix[i][j]){
                smallrow2=matrix[i][j];
            }
        }
    }
    printf("\nSmallest values in each row.\nRow1: %d\tRow2:  %d\tRow3:  %d",smallrow0,smallrow1,smallrow2);
    int largecolum0=matrix[0][0];  // finding largest value in column1.
    for(int i=0; i<3; i++){
        for(int j=0; j<1; j++){
            if(largecolum0<matrix[i][j]){
                largecolum0=matrix[i][j];
            }
        }
    }
    int largecolum1=matrix[0][1];  // largest value in column 2.
    for(int i=0; i<3; i++){
        for(int j=1; j<2; j++){
            if(largecolum1<matrix[i][j]){
                largecolum1=matrix[i][j];
            }
        }
    }
    int largecolum2=matrix[0][2];  // smalllest value in row 3.
    for(int i=0; i<3; i++){
        for(int j=2; j<3; j++){
            if(largecolum2<matrix[i][j]){
                largecolum2=matrix[i][j];
            }
        }
    }
    printf("\n\nLargest in each column.\nColumn1: %d\tColumn2: %d\tColumn3: %d",largecolum0,largecolum1,largecolum2);
    if(smallrow0==largecolum0 || smallrow0==largecolum1 || smallrow0==largecolum2 || smallrow1==largecolum0 || smallrow1==largecolum1 || smallrow1==largecolum2 || smallrow2==largecolum0 || smallrow2==largecolum1 || smallrow2==largecolum2){
        if(smallrow0==largecolum0){
            printf("\n\nSaddle point :  %d",smallrow0);}
        if(smallrow0==largecolum1){
            printf("\n\nSaddle point :  %d",smallrow0);}
        if(smallrow0==largecolum2){
            printf("\n\nSaddle point :  %d",smallrow0);}
        if(smallrow1==largecolum0){
            printf("\n\nSaddle point :  %d",smallrow1);}
        if(smallrow1==largecolum1){
            printf("\n\nSaddle point :  %d",smallrow1);}
        if(smallrow1==largecolum2){
            printf("\n\nSaddle point :  %d",smallrow1);}
        if(smallrow2==largecolum0){
            printf("\n\nSaddle point :  %d",smallrow2);}
        if(smallrow2==largecolum1){
            printf("\n\nSaddle point :  %d",smallrow2);}
        if(smallrow2==largecolum2){
            printf("\n\nSaddle point :  %d",smallrow2);}
    }
    else
        printf("\n\nNo saddle point(s) encountered. ");

}