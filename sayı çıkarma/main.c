#include <stdio.h>
#include <stdlib.h>

int main()
 {
     int A, B ;
     dongu:
     printf("A sayisini giriniz: ");
     scanf("%d", &A );
     printf("\n");

     printf("B sayisini giriniz: ");
     scanf("%d", &B);

     if(A==B)
     printf("\nA ve sayilari birbirine esittir\n");
     sonuc=A-B;
     else if (A>B)
     printf("A sayisi B sayisindan BUYUKTUR ! \n");
     sonuc=A-B;
     else
     printf("\nB sayisi A sayisindan BUYUKTUR !\n");
     sonuc=B-A;
     printf("\sonuc= %d\n", sonuc);
     goto dongu;
     return 0;
 }
