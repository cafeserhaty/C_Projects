#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    printf("\n N sayisini giriniz: ");
    scanf("%d", &N);
    printf("\n M sayisini giriniz: ");
    scanf("%d", &M);
    printf("\n Sonuc = %d\n", seriHesapla(N,M));
    return 0;
}



int seriHesapla (int N, int M)
{
    int i, j, toplam=0;
    for(i=1; i<=N; i++){
        for(j=1; j<=M; j++){
            toplam+=((i*i)+(2*i*j)+(j*j));
        }
    }
    return toplam;
}
