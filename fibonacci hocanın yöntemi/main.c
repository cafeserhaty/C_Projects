#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    int fibonacci[100];
    printf("\n N sayisini giriniz: ");
    scanf("%d", &N);
    printf("\n");
    fibonacci[1]=1;
    fibonacci[2]=1;
    for(i=3; i<=N; i++)
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
            for(i=0; i<=N; i++)
                printf(" %d", fibonacci[i]);
            printf("\n");
    return 0;
}
