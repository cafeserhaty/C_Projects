#include <stdio.h>
#include <stdlib.h>

int main()
{
    char boya_rengi;
    int raf_sayisi;
    int net_tutar;
    don:
    printf("istediginiz boya rengini giriniz (kirmizi-gri-sari) \n");
    scanf("%c" , &boya_rengi);
    printf("istediginiz raf sayisini giriniz \n");
    scanf("%d" , &raf_sayisi);

    switch(boya_rengi)
{
    case 'kirmizi' :
    net_tutar= 200+(raf_sayisi*30);
    break;

    case 'gri':
    net_tutar=200+(raf_sayisi*20);
    break;

    case 'sari':
    net_tutar=200+(raf_sayisi*35);
    break;

    default:
    printf("belirtilen boya opsiyonlarindan birini girmediniz \n");
    break;

}
  printf("\n boya +raf net tutari %d tl dir \n" , net_tutar );
  goto don;
  return 0;

}
