#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baslangic , bitis , toplam=0;
    printf("\n baslangic degerini giriniz: ");
    scanf("%d" , &baslangic);

    printf("\n bitis degerini giriniz: ");
    scanf("%d" , &bitis);

    for(i=baslangic; i<=bitis; i++)
    {
        toplam=toplam+i;
    }
   printf("\n%d sayisi ile %d sayisi arasindaki degerlerin toplami = %d dir\n" , baslangic , bitis , toplam);
   retutn=0;
}
