#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gun_saat;
    don:
    printf("saat degeri giriniz \n");
    scanf("%d", gun_saat);

    if(gun_saat>=0 && gun_saat<6)
    {
        printf("gece \n");
    }
    else if (gun_saat>=6 && gun_saat<12)
    {
        printf("sabah \n");
    }
    else if (gun_saat>=12 && gun_saat<18)
    {
        printf("ogle \n");
    }
    else if (gun_saat>=18 && gun_saat<24)
    {
        printf("aksam \n");
    }
    else
    {
        printf("gecersiz bir saat girdiniz \n");
    }
    goto don;
    return 0;
}
