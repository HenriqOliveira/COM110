#include <stdio.h>
#include <stdlib.h>
int main()
{
  int opcao;
  do
  {
    printf("Digite o número da opção desejada: \n1.FEIJOADA \n2.FILÉ DE FRANGO \n3.BIFE ACEBOLADO \n4. CANCELAR \n");
    scanf("%d", &opcao);
  }while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4);
  printf("Você escolheu %d", opcao);
  return 0;
}
