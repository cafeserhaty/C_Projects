#include <stdio.h>
#include <stdlib.h>

int main()
{
 char harf;
 printf("lutfen bir karakter giriniz: ");
 scanf("%c", &harf );
 printf("\n");

 switch(harf){
  case 'a':
   printf("klavyeden a harfine bastiniz....\n");
   break;
   case 'A':
   printf("klavyeden A harfine bastiniz....\n");
   break;
   case 'b':
   printf("klavyeden b harfine bastiniz....\n");
   break;
   case 'B':
   printf("klavyeden B harfine bastiniz....\n");
   break;
   case 'c':
   printf("klavyeden c harfine bastiniz....\n");
   break;
   case 'C':
   printf("klavyeden C harfine bastiniz....\n");
   break;
   }
   return 0 ;
}
