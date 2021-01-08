#include <stdio.h>
#include <stdlib.h>

int faktoriyelHesapla(int n);



int main()
{
    int sayi;
    printf("\n Faktoriyeli hesaplanacak sayiyi giriniz: ");
    scanf("%d", &sayi);



    printf("\n %d! = %d \n", sayi, faktoriyelHesapla(sayi));
    return 0;
}



int faktoriyelHesapla(int n)
{
    if(n<=1)
        return 1;
    else
        return (n*faktoriyelHesapla(n-1)); //yineleme
}
