#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ogr1Not[3], ogr2Not[3], ogr3Not[3];
   int i;



   for(i=0; i<3; i++){
        printf("\n 1. ogrencinin %d. notunu giriniz: ", i+1);
        scanf("%d", &ogr1Not[i]);
        printf("\n 2. ogrencinin %d. notunu giriniz: ", i+1);
        scanf("%d", &ogr2Not[i]);
        printf("\n 3. ogrencinin %d. notunu giriniz: ", i+1);
        scanf("%d", &ogr3Not[i]);
   }
   printf("\n Ekran Ciktisi - 1: %d \n", ogr1Not[0]+ogr2Not[1]+ogr3Not[2]);



   for(i=0; i<3; i++){
        printf("\n %d. sinav ortalamasi = %d \n", i+1, (ogr1Not[i]+ogr2Not[i]+ogr3Not[i])/3);
   }
}
