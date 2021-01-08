#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,x,y,z;
   x=1;
   y=0;
   z=0;
    printf("%d \n ",y);
    printf("%d \n",x);

   for(i=0 ; i<44; i++)
   {
       z=x;
       x=x+y;
       y=z;
       printf("%d \n",x+y);
   }
       return 0;
}
