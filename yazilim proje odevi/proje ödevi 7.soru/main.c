#include <stdio.h>
#include <stdlib.h>

int main()
{
     unsigned int x;
     don:
     printf("Sayi giriniz\n");
     scanf("%d",&x);
     printf("",sayi_kubu(x));
     printf("",sayi_kare(x));
     goto don;
     return 0;
}
int sayi_kubu(unsigned int x)
{
    unsigned int a;
    a=0;
    a=x*x*x;
    printf("Girilen sayinin kupu = %d\n",a);
    return 0;
}
int sayi_kare(unsigned int x)
{
    unsigned int b,i;
    b=0;
    for(i=1;i<=x;i++)
    {
     b=b+i*i;
    }
     printf("Girdiginiz sayiya kadar tamsayilarin kareleri toplami = %d\n",b);
     return 0;
}
