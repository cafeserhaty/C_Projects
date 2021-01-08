#include <stdio.h>
#include <stdlib.h>

int main()
{
    kutuCiz(30,100);
    return 0;
}



void kutuCiz(int satir, int sutun)
{
    int i;
    for(;satir>0; satir--){
        for(i=sutun; i>0; i--)
            printf("*");
        printf("\n");
    }
}
