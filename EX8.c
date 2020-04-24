#include <stdio.h>
#include <stdlib.h>
int main()
{
  int hora;
  printf ("Digite que horas são, no formato 24H: ");
  scanf("%d", &hora);
  if (hora >= 5 && hora <= 11)
  {
    printf("É DE MANHÃ!");
  }
  else
  {
    if (hora >= 12 && hora < 18)
    {
      printf("É DE TARDE!");
    }
    else
    {
      printf("É DE NOITE!");
    }
  }
  return 0;
}
