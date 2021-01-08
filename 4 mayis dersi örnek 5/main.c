#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, N, temp;
    printf("\nN degerini giriniz: ");
    scanf("%d", &N);



    int A[N];
    for(i=0; i<N; i++){
        printf("\n%2d. sayiyi giriniz: ", i+1);
        scanf("%d", &A[i]);
    }
    for(i=0; i<N; i++){
        for(j=0; j<N-i-1; j++)
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
    }
    printf("\n");
    for(i=0; i<N; i++){
        printf(" %d \t", A[i]);
    }
    printf("\n");
    return 0;
}
