#include <stdio.h>
#include <stdlib.h>

int main()
{
    int plasiyerin_ham_maasi;
    float cocuk_yardim;
    float satis_primi;
    float asil_maas;
    asil_maas=1;
    don:
    printf("plasiyerin maasini giriniz\n");
    scanf("%d", &plasiyerin_ham_maasi);
    cocuk_yardim=(plasiyerin_ham_maasi*0.04);
    satis_primi=(plasiyerin_ham_maasi*0.06);
    asil_maas=(cocuk_yardim+satis_primi+plasiyerin_ham_maasi);
    printf("asil_maas= %f \n" , asil_maas);
    goto don;
    return 0;
}
