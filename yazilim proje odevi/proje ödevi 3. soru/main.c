int main()
{
    int gun;
    don:
    printf("Gun degerini giriniz.(1-7) \n");
    scanf("%d", &gun);
    switch (gun)
{
   case 1 :
   printf("Sectiginiz gun pazartesi \n");
   break;
   case 2 :
   printf("Sectiginiz gun sali \n");
   break;
   case 3 :
   printf("Sectiginiz gun carsamba \n");
   break ;
   case 4 :
   printf("Sectiginiz gun persembe \n");
   break;
   case 5 :
   printf("Sectiginiz gun cuma \n");
   break;
   case 6 :
   printf("Sectiginiz gun cumartesi \n");
   break;
   case 7 :
   printf("Sectiginiz gun pazar \n");
   break;
   default :
   printf("Hatali gun girdiniz \n");
}
   goto don;
}

