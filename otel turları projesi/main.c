#include <stdio.h>
#include <stdlib.h>

int main()
{
   int secim;

   printf("****camelot turizm A.S.****\n");
   printf("1. Orta amerika turlar�\n");
   printf("2.guney amerika turlar�\n");
   printf ("3.kuzey amerika turlar�\n");
   printf("4.uzak do�u turlar�\n");
   printf("\n");
   printf("tur no giriniz--->");
   scanf("%d" , &secim);
   switch(secim);
   {
       case 1:
       printf("ucak ile viyana budapeste prag turlari\n");
       printf("4 yildizli otellerde sok fiyat 1700$\n");
      break;
        default
  printf("gecersiz secim!\n");
   }
   return 0;
}
