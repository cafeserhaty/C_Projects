#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elBagaj, normalBagaj, ekUcret=0;
    printf("\n El bagaji agirligini giriniz: ");
    scanf("%d", &elBagaj);



    printf("\n Normal bagaj agirligini giriniz: ");
    scanf("%d", &normalBagaj);



    if(elBagaj>8){
        if(normalBagaj>15){
            ekUcret=(4*(elBagaj-8))+(5*(normalBagaj-15));
        }
        else{
            ekUcret=4*(elBagaj-8);
        }
    }
    else if(normalBagaj<15){
        printf("\n Ek ucret odenmesine gerek yoktur...!\n");
    }
    else{
        ekUcret=5*(normalBagaj-15);
    }
    printf("\n Odenecek ek ucret = %d TL dir...\n", ekUcret);
    return 0;
}
