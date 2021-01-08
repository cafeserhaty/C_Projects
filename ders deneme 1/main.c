#include <stdio.h>
#include <stdlib.h>

int main()
{
  int plaka_kod;
  printf("Il plaka kodunu giriniz: ");
  scanf("%d", &plaka_kod);
  printf("\n");

  switch (plaka_kod)
  {
      case 1:
      printf("adana\n");
      break;
      case34:
      printf("Istanbul\n");
      break;
      case 35:
      printf("izmir\n");
      break;
      case 45:
      printf("45.5 manisa-turgutlu");
      break;
      default:
      printf("hatalý kod girdiniz!\n");
  }
}
