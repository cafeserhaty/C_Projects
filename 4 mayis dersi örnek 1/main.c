#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    printf("Bir N degeri giriniz: ");
    scanf("%d", &N);



    int A[N]; //--> dizi tan�m�



    for(i=1; i<=N; i++)
    {
        A[i]=i; //--> diziye de�er atama
    }

    for(i=1; i<=N; i++)
    {
        printf("\n %d. dizi elemani --> A[%d] = %d \n", i, i, A[i]);
    }

    return 0;
}
