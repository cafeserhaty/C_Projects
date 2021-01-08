#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][3]={5, 3, 7, 0, 1, 2};
    int B[2][3]={1, 2, 3, 4, 5, 6};
    int T[2][3];
    int i, j;



    printf("\nA Matrisi: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++)
            printf(" %4d", A[i][j]);
            printf("\n");
    }



    printf("\nB Matrisi: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++)
            printf(" %4d", B[i][j]);
            printf("\n");
    }



    printf("\nT Matrisi: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            T[i][j]=A[i][j]+B[i][j];
            printf(" %4d", T[i][j]);
        }
            printf("\n");
    }
    return 0;
}
