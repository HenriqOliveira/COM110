#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int n1, n2, cont;
  printf("Digite dois números inteiros: ");
  scanf("%d %d", &n1, &n2);
  if (n2 > n1)
  {
  for(cont = n1; cont <= n2; cont++)
  printf("%d ", cont);
  }
  else
  {
    if (n2 < n1)
    {
    for(cont = n2; cont <= n1; cont ++)
    printf("%d ", cont);
    }
  }
  return 0;
} 
