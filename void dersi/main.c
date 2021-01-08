#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam_sonucu, fark_sonucu;
    toplam_sonucu = topla(25 , 45);
    fark_sonucu=fark(98,63);
    printf("\n cikarma sonucu = %d\n",fark_sonucu);
    printf("\n toplama sonucu = %d\n", toplam_sonucu);
    return 0;
}
int topla(int x, int y)
{
    return x+y;
}
int fark(int x,int y)
{

    return x-y;
}
