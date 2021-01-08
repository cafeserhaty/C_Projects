#include <stdio.h>
#include <stdlib.h>

  int main()
{
    int grafik[10]={19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int i, j;



    for(i=0; i<10; i++){
        printf("\n %3d. eleman degeri: %3d --> ", i, grafik[i]);



        for(j=1; j<=grafik[i]; j++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
