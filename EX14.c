#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, cont, maior, menor;
  cont = 0;
  maior = 0;
  menor = 0;
  do
  {
    printf("Digite um número: ");
    scanf("%d", &n);
    if (cont == 0)
    {
      maior = n;
      menor = n;
      cont++;
    }
    else
    {
      if (n > maior)
      {
        maior = n;
      }
      else
      {
        if(n < menor)
        {
          menor = n;
        }
      }
    }
  }while(n >= 0);
  printf("O maior número digitado é %d e o menor é %d", maior, menor);
  return 0;
}
