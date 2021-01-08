#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int i;
    a=0;

    for(i=1;i<=99;i++)
    {
        a=a+i;
        printf("\n %d. duraktaki yolcu sayisi =%d dir \n", i, a);
    }

    printf("duraklarda alýnan toplam yolcu sayisi %d dir \n" , a);
    return 0;
}
