#include <stdio.h>
#include <stdlib.h>
int main()
{
  int diaN, mesN, anoN, diaA, mesA, anoA, mesC, diaC, idade, nIdade, dnIdade;
  printf ("Insira a data do seu nascimento, separadamente: ");
  scanf("%d %d %d", &diaN, &mesN, &anoN);
  printf("Insira a data atual, separadamente: ");
  scanf("%d %d %d", &diaA, &mesA, &anoA);
  idade = anoA - anoN;
  mesC = mesA - mesN;
  diaC = diaA - diaN;
  if (mesC < 0)
  {
    nIdade = idade - 1;
    printf ("Você tem %d anos", nIdade);
  }
  else
  {
    if(mesC >= 0 && diaC <0)
    {
      dnIdade = idade - 1;
      printf("Você tem %d anos", dnIdade);
    }
    else
    {
      printf("Você tem %d anos", idade);
    }
  }
  return 0;
}   
