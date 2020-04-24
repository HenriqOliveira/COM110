#include <stdio.h>
#include <stdlib.h>
int main()
{
  int min, seg;
  printf ("Digite os minutos: ");
  scanf("%d", &min);
  seg = min * 60;
  printf("Em %d minutos há %d segundos.",min, seg);
  return 0;
}
