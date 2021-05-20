#include <stdio.h>

int main() {
  float capital, montante, taxaAplicacao, periodo;

  printf("========SISTEMA DE CAPITAL======== \n");
  printf("Qual sera o valor do capital: ");
  scanf("%f", &capital);
  printf("Taxa de aplicacao: ");
  scanf("%f", &taxaAplicacao);
  printf("Periodo em mes (n) : ");
  scanf("%f", &periodo);

  montante = capital * pow(1+ taxaAplicacao/100, periodo);
  printf("O Montante em mes (n) : %3.f \n", montante);

}