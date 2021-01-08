#include <stdio.h>
#include <stdlib.h>

int main()
{
   float yapilan_alisveris_tutari;
   float net_alisveris_tutari;
   float indirimli_alisveris_tutari;
   don:
   net_alisveris_tutari=0;
   printf("yapilan alisverisi giriniz \n");
   scanf("%f" , &yapilan_alisveris_tutari);
   if(yapilan_alisveris_tutari>=1500)
   {
      indirimli_alisveris_tutari= (yapilan_alisveris_tutari * 0.2) ;
      net_alisveris_tutari = (yapilan_alisveris_tutari - indirimli_alisveris_tutari);
      printf("ödemeniz gereken net tutar %f tl dir \n" ,net_alisveris_tutari);
   }
   else
   {
       printf("ödemeniz gereken net tutar %f tl dir \n" , yapilan_alisveris_tutari);
   }
   goto don;
   return 0;
}
