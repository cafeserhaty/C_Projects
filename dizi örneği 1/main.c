#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5];
    int i;

    for(i=0 ; i<5 ; i++)
    {
        dizi[i] = i*3;
    }

    for (i=0 ; i<5 ; i++)
    {
        printf("\n %d. dizi eleman degeri --> dizi[%d] = %d \n", i+1 , i , dizi[i]);
    }
    return 0;
}
