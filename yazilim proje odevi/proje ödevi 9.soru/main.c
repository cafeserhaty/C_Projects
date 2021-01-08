#include <stdio.h>
#include <stdlib.h>

int main()
{
{
    int x,y,z,i,a,b;
    b=0;
    for(i=100;i<1000;i++)
{
    y=(i/1)%10;//yüzler basamağını bulmak için
    x=(i/10)%10;//onlar basamðğını bulmak için
    z=(i/100)%10;//birler basamağını bulmak için
    a=(x+y+z)%3;//3 e bölünebilirliği test etmek için
    if(x==8&&a==0)
{
      b=b+i;
      printf("%d\n",i);
}
      else
      continue;
}
      printf("toplam=%d",b);
}
	  return 0;
}
