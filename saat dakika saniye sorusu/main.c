#include <stdio.h>
#include <stdlib.h>

int main()
{
   int saat,dakika,saniye;
   don:
   printf("saniye degerini giriniz \n");
   scanf("%d",&saniye);

   saat   = saniye / 3600;
   saniye = saniye - (saat*3600);
   dakika = saniye / 60;
   saniye = saniye - (dakika * 60);
   printf("%02d:%02d:%02d \n",saat,dakika,saniye);
   goto don;
   return 0;
}
