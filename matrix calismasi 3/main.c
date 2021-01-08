#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi1[50], dizi2[50];
    int i;
    printf("\nLutfen birinci metni giriniz: ");
    gets(dizi1);
    printf("\nLutfen ikinci metni giriniz: ");
    gets(dizi2);



    printf("\n Uzunluk: %d \n", strlen(dizi1)+strlen(dizi2));



    strcat(dizi1, dizi2);
    printf("\n Birlestirilmis metin: ");
    printf(dizi1);
    printf("\n");
    return 0;
}
