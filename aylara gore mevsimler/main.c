#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay;
    dongu:
    printf("bir ay giriniz: ");
    scanf("%d" , &ay);

    switch(ay){
    case 12:
    case 1:
    case 2:
    printf("girdiginiz ay kis mevsimindedir!\n");
    break;
    case 3:
    case 4:
    case 5:
    printf("girdiginiz ay ilkbahar mevsimindedir!\n");
    break;
    case 6:
    case 7:
    case 8:
    printf("girdiginiz ay yaz mevsimindedir!\n");
    break;
    case 9:
    case 10:
    case 11:
    printf("girdiginiz ay sonbahar mevsimindedir!\n");
    break;
    default:
        printf("\n hatali bir ay girdiniz ");
}
goto dongu;
}
