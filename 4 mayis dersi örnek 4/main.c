#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, A[10], enBuyuk;
    for(i=0; i<10; i++)
    {
        printf("\n%2d. sayiyi giriniz: ", i+1);
        scanf("%d", &A[i]);
    }
    enBuyuk=A[0];
    for(i=1; i<10; i++)
    {
        if(A[i]>enBuyuk)
        {
            enBuyuk=A[i];
        }
    }
    printf("\nEn buyuk deger = %d\n", enBuyuk);
    return 0;
}
