#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=35;
    b=0;
    c=1;
    don:
    printf("1000 ile 1 arasinda sayi giriniz\n");
    scanf("%d", &b);
    if(b>1000 || b<1)
    printf("tanimsiz deger girdiniz lutfen girdiginiz sayiyi duzeltin\n");
    else if(b>a)
      printf("girdiginiz deger bilgisayarin tuttugu sayidan buyuk\n");
    else if(b<a)
      printf("girdiginiz deger bilgisayarin tuttugu sayidan kucuk\n");
    else if (b==a)
{
      printf("BASARDIN girdiginiz deger bilgisayarin tuttugu sayiyla eslesti\n");
      printf("%d. denemede buldunuz" , c);
      return 0;
}
      c++;
      goto don;
}
