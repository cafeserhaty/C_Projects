#include <stdio.h>
#include <stdlib.h>

char Notu_Harfe_Donustur(int ogrNot);



int main()
{
    int not;
    dongu:
    printf("\n Bir not giriniz: ");
    scanf("%d", &not);
    printf("\n Girilen Not=%d --> Harf Notu=%c \n", not, Notu_Harfe_Donustur(not));
    goto dongu;
    return 0;
}



char Notu_Harfe_Donustur(int ogrNot)
{
    if(ogrNot>=0 && ogrNot<60)
        return 'F';
    else if(ogrNot>=60 && ogrNot<65)
        return 'D';
    else if(ogrNot>=65 && ogrNot<75)
        return 'C';
    else if(ogrNot>=75 && ogrNot<85)
        return 'B';
    else
        return 'A';
}
