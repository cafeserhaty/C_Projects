#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100];
    int arananDeger, i;
    int bulunan_indis= -1;
    for(i=0; i<100; i++){
        A[i]=i*2;
    }
    printf("\n Aranacak degeri giriniz: ");
    scanf("%d", &arananDeger);
    for(i=0; i<100; i++){
        if(arananDeger==A[i]){
            bulunan_indis=i;
            printf("\n Aranan deger %d --> %d. indiste bulundu...\n", arananDeger, bulunan_indis);
            break;
        }
    }
    if(bulunan_indis==-1)
        printf("\n Aranan bilgi %d bulunamadi! \n", arananDeger);
    return 0;
}
