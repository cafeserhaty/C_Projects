#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,M,N,b;
    don:
    M,N,b = 0 ;
    i =1;
    j=1;
    printf("once N yi ve sonra M yi giriniz \n");
    scanf("%d %d",&N,&M);
    do
{
    do
{
    b = b + ((i*i) + (2*i*j) + (j*j)) ;
    j++;
}
    while(j<=M);
    i++;
    j=1;
}
    while(i<=N);
    printf("%d \n",b);
    goto don;
    return 0 ;
}
