#include <stdio.h>
#include <stdlib.h>
int main()
{
  int velVei, velVia, vintePc, cinqPc;
  printf("Velocidade do veículo: ");
  scanf("%d", &velVei);
  printf("Velocidade máxima da via: ");
  scanf("%d", &velVia);
  vintePc = velVia * 1.2;
  cinqPc = velVia * 1.5;
  if (velVei <= velVia)
  {
    printf("Não houve multa!");
  }
  else
  {
    if (velVei > velVia && velVei <= vintePc)
    {
      printf("O valor da multa é R$ 85,13");
    }
    else
    {
      if (velVei > vintePc && velVei <= cinqPc)
      {
        printf("O valor da multa é R$ 127,69");
      }
      else
      {
        printf("O valor da multa é R$ 574,62");
      }
    }
  }
  return 0;
}
