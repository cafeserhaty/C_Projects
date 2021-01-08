#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   a=1;
   b=12;
   printf("bakteri sayisi baslangicta=1 gecen dakika=60 bakteri her 5 dakikada bir bolunuyor \n");
   for(c=0 ; c<b ; c++)
{
   a=a*2;
}
   printf(" 60 dakika sonunda bu kadar bakteri var :%d \n" , a);
}
