#include <stdio.h>
#include <stdlib.h>

int main()
{   int sinif_mevcudu,i= 0;
    printf("ogrenci sayisini giriniz : ");
    scanf( "%d" , & sinif_mevcudu );
    int vize_notu[sinif_mevcudu];
    int final_notu[sinif_mevcudu];
    int basari_puani[sinif_mevcudu];
    for(i=0;i<sinif_mevcudu;i++)
    {
        printf("%d. ogrencinin vize notunu giriniz \n",i+1);
        scanf("%d", &vize_notu[i]);
    }

    for(i=0;i<sinif_mevcudu;i++)
    {
        printf("%d. ogrencinin final notunu giriniz \n",i+1);
        scanf("%d", &final_notu[i]);
        basari_puani[i]=(vize_notu[i]*40/100)+(final_notu[i]*60/100);
    }

    for(i=0;i<sinif_mevcudu;i++)
    {
      printf("%d. ogrencinin basari notu %d ' dir \n", i+1 , basari_puani[i]);
      if(basari_puani[i]>=90)
      {
        printf("harf notu AA\n");
      }
      else if (basari_puani[i]>=85)
      {
        printf("harf notu BA\n");
      }
      else if(basari_puani[i]>=80)
      {
        printf("harf notu BB\n");
      }
      else if(basari_puani[i]>=75)
      {
        printf("harf notu CB\n");
      }
      else if(basari_puani[i]>=70)
      {
        printf("harf notu CC\n");
      }
      else if(basari_puani[i]>=60)
      {
        printf("harf notu DC\n");
      }
      else if(basari_puani[i]>=50)
      {
        printf("harf notu DD\n");
      }
      else if(basari_puani[i]>=30)
      {
        printf("harf notu FD\n");
      }
      else
      {
        printf("harf notu FF\n");
      }
    }

    return 0;
}
