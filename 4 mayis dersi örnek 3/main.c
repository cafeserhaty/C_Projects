#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, tekSayac=0, ciftSayac=0;
    printf("Bir N degeri giriniz: ");
    scanf("%d", &N);



    int A[N], tek[N], cift[N];



    for(i=1; i<=N; i++)
    {
        A[i]=i;
    }



    for(i=0; i<=N; i++)
    {
        if(A[i]%2==0)
        {
            cift[ciftSayac]=i;
            ciftSayac++;
        }
        else
        {
            tek[tekSayac]=i;
            tekSayac++;
        }
    }
    printf("\nTek Sayilar: ");
    for(i=0; i<tekSayac; i++)
    {
        printf("%d ", tek[i]);
    }



    printf("\n");
    printf("\nCift Sayilar: ");
    for(i=0; i<ciftSayac; i++)
    {
        printf("%d ", cift[i]);
    }
    printf("\n");
    return 0;
}
