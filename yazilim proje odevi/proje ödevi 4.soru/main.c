#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10] = { 2 , 1 , 0 , 0 , 2 , 1 , 1 , 2 , 1 , 0 } ;
    int i,b,c,d,e ;
    d=0;
    c=0;
    b=0;
    for(i=0 ; i<10 ; i++)
{
        if(dizi[i]==2)
        {
           b=b+3 ;
        }
        else if(dizi[i]==1)
        {
            c=c+0;
        }
        else if(dizi[i]==0)
        {
            d=d+1;
        }
}
     e=b+c+d;
     if(e>=12)
       {
         printf("takim kumede kalmistir puaniniz: %d \n",e);
       }
       else
       {
         printf("takim kume dusmustur puaniniz: %d \n",e);
       }
       return 0;
}
