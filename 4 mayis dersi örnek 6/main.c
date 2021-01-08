#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, A[100], B[100], C[100];
    printf("\n Dizinin eleman sayisini giriniz: ");
    scanf("%d", &n);



    for(i=0; i<n; i++){
        printf("\n A[%d]= ", i);
        scanf("%d", &A[i]);
    }



    for(i=0; i<n; i++){
        printf("\n B[%d]= ", i);
        scanf("%d", &B[i]);
    }



    for(i=0; i<n; i++){
        C[i]=A[i]+B[i];
        printf("\n C[%d]= %d \n", i, C[i]);
    }
    return 0;
}
