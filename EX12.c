#include <stdio.h>
#include <stdlib.h>
int main()
{
  int cont;
  printf("DE 1 A 20\n");
  cont = 1;
  while (cont <= 20)
  {
    printf("%d, ", cont);
    cont = cont + 1;
  }
  printf ("\nDE 20 A 1\n");
  cont = 20;
  while (cont > 0)
  {
    printf("%d, ", cont);
    cont = cont - 1;
  }
  printf ("\nSÓ ÍMPARES DE 1 A 20\n");
  cont = 1;
  while (cont <= 20)
  {
    printf("%d, ", cont);
    cont = cont + 2;
  }
  return 0;
}
