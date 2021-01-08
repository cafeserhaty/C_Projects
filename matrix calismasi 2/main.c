#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ogrNotlar [3][3];
    int i, j;



    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\n%d. ogrencinin %d. sinav notu: ", i+1, j+1);
            scanf("%d", &ogrNotlar[i][j]);
        }
    }
    printf("\nEkran Ciktisi-1: %d \n", ogrNotlar[0][0]+ogrNotlar[1][1]+ogrNotlar[2][2]);



    for(i=0; i<3; i++){
        printf("\n%d. Sinav ortalamasi = %d \n", i+1, (ogrNotlar[0][i]+ogrNotlar[1][i]+ogrNotlar[2][i])/3);
    }
    return 0;
}
