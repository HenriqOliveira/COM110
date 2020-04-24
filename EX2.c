#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int n = 3, potencia, potenciaP, result;
  printf("Dê um número que elevará 3, de 0 até esse número: ");
  scanf("%d", &potencia);
  potenciaP = -1;
  do
  {
    potenciaP = potenciaP + 1;
    result = pow(n, potenciaP);
    printf("%d ^ %d = %d\n",n, potenciaP, result);
  }while(result < pow(n, potencia));
  return 0;
} 
