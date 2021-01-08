#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t=0, temp;
    printf("\n Bir sayi giriniz...: ");
    scanf("%d", &n);



    temp=n;



    while(temp!=0)
    {
        t=t*10;
        t=t+temp%10;
        temp=temp/10;
    }



    if(n==t)
        printf("\n %d sayisi palindromik bir sayidir...\n", n);
    else
        printf("\n %d sayisi palindromik bir sayi degildir!...\n", n);
    return 0;
}
