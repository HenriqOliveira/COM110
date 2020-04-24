#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int n, potencia, result;
  printf("Digite um número que será elevado até a sua décima potência: ");
  scanf("%d", &n);
  potencia = -1;
  if (n == 1)
  {
    printf("Qualquer potência que elevar 1, o resultado será 1");
  }
  else 
  {
    if (n == 0)
    {
      printf("Qualquer potência que elevar 0, o resultado será 0 \nPorém, se elevar 0 a 0, o resultado será 1, já que qualquer número elevado a 0 o resultado é 1.");
    }
    else
    {
      do
      {
        potencia = potencia + 1;              
        result = pow(n, potencia);
        printf("%d\n", result);  
      }while (result < pow(n, 10));
    }
  }
  return 0;
}             
