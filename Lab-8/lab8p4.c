#include <stdio.h>
int main()
{
    int matrix1[3][3]; // matrix1 input
    int i,j,k,l;
    for(i=0; i<3; i++){ //i for rows & j for colmns.
        for(j=0; j<3; j++){
            printf("Enter value of matrix1 indexs for %d and %d:  ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
    }
    int matrix2[3][3]; // matrix2 input
    for(k=0; k<3; k++){  // k for rows & l for columns.
        for(l=0; l<3; l++){
            printf("Enter value of matrix2 indexs for %d and %d:  ",k,l);
            scanf("%d",&matrix2[k][l]);
        }
        printf("\n"); 
    }
    printf("\n   Product of given matrixs   \n\n\n");
    int product[3][3];
    int p,q;
    product[0][0]=0;
    printf("|");
    for(i=0,p=0 ;i<3 && p<3;i++,p++){         // multiplying martixs
        for(l=0,q=0 ; l<3 && q<3 ; l++,q++){
            for(j=0, k=0; j<3 && k<3 ; j++, k++){
                product[p][q] += matrix1[i][j]*matrix2[k][l];
            }
            printf(" %d ",product[p][q]);
            printf("\t");
        }
        printf("|\n|");
    }
    printf("\b");

}    