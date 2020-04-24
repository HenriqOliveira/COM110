#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n1, adc, sub, mtp;
  float n2, dvs;
  printf("Digite dois números que serão realizadas operações: ");
  scanf("%d %f", &n1, &n2);
  if(n2 == 0)
  {
    adc = n1 + n2;
    sub = n1 - n2;
    mtp = n1 * n2;
    printf("%d + %f = %d \n%d - %f = %d \n%d x %f = %d \nImpossível dividir por ZERO.", n1, n2, adc, n1, n2, sub,n1, n2, mtp);
  }
  else
  {
    adc = n1 + n2;
    sub = n1 - n2;
    mtp = n1 * n2;
    dvs = n1 / n2;
    printf("%d + %0.0f = %d \n%d - %0.0f = %d \n%d x %0.0f = %d \n%d / %0.0f = %0.1f", n1, n2, adc, n1, n2, sub,n1, n2, mtp, n1, n2,dvs);    
  }
  return 0;
}
