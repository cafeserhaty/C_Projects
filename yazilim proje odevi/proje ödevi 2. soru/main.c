#include <stdio.h>
#include <stdlib.h>

int main()
{
   char hali_tipi;
   float hali_metrekare;
   float halinizin_fiyati;
   float hali_ucreti;
   char T;
   char S;
   char B;
   don:
   printf("kac_metrekare_hali_istiyorsunuz \n");
   scanf("%f", &hali_metrekare);
   printf( "hali tipini giriniz \n");
   scanf("%s" , &hali_tipi);

   if( hali_tipi == 'T' )
{
   halinizin_fiyati=( (18.80)*hali_metrekare );
   printf("halinizin fiyati %f tl \n", halinizin_fiyati );
}
   else if( hali_tipi == 'B' )
{
       halinizin_fiyati=((17.80)*hali_metrekare);
       printf("halinizin fiyati %f tl \n" , halinizin_fiyati );
}
   else if( hali_tipi == 'S' )
{
      halinizin_fiyati=((19.20)*hali_metrekare);
      printf("halinizin fiyati  %f tl \n" , halinizin_fiyati );
}
   else
{
         printf("olmayan bir hali tipi girdiniz \n");
}
     goto don;
    return 0;
}
