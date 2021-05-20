#include <stdio.h>

int main() {
  int baseMenor, baseMaior, altura, area;

  printf("======CALCULE A AREA DO TRAPEZIO====== \n");
  printf("Qual e o valor da base maior: ");
  scanf("%d",baseMaior);
  printf("Qual e o valor da base menor: ");
  scanf("%d", &baseMenor);
  printf("Qual e o valor da altura: ");
  scanf("%d", &altura);

  area = ((baseMaior + baseMenor) * altura) / 2;

  printf("A area do trapezio e de: %d \n", area);
  printf("======CALCULO REALIZADO COM SUCESSO======");
}