#include <stdio.h>
#include <stdlib.h>

int main()
{
    int koltuk;
    don:
    printf("koltuk numarasi giriniz.(1-20) \n");
    scanf("%d", &koltuk);
    switch (koltuk)
{
   case 1 :
   case 3 :
   case 5 :
   case 15:
   case 17:
   printf("Sectiginiz koltuk doludur \n");
   break;
   default:
   printf("sectiginiz koltuk secimi basarili \n");
   break;
}
   goto don;
}

