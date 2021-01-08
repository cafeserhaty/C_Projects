#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi , i;
    int faktoriyel=1;
    printf("\n bir sayi giriniz : ");
    scanf("%d", &sayi);

    if(sayi>=0)
    {
        for (i=sayi ; i>0 ; i--)
        {
            faktoriyel*=i;
        }
        printf("\n%d!= %d \n", sayi ,faktoriyel);
    }
    else
     printf ("\n Hata: Sayi 0'dan kucuk olamaz !\n");
    return 0;
}
