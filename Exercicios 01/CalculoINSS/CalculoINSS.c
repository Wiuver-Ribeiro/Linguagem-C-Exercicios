#include <stdio.h>

int main() {
  char funcionario[30];
  int numeroFilhos;
  float salarioBruto, salarioFamilia, totalSalFamilia, 
  salarioLiquido, descontoINSS, descontoPFamilia, totalDescontos;

  printf("========NOTA FISCAL======== \n");
  printf("Nome do funcionario: ");
  scanf("%s", &funcionario);
  printf("Qual e o seu salario bruto: ");
  scanf("%f", &salarioBruto);
  printf("Quantos filhos voce tem: ");
  scanf("%i", &numeroFilhos);
  printf("Qual e o salario de familia: ");
  scanf("%f", &salarioFamilia);

  printf("=======================================\n\n");
  descontoINSS = (salarioBruto * 10/100); // Desconto de 10% do salario bruto
  descontoPFamilia = (salarioBruto * 5/100 ); // desconto do plano saude de % do salaro bruto
  salarioLiquido = salarioBruto - (descontoPFamilia + descontoINSS); // Salario liquido, com todos os descontos feitos

  totalDescontos = descontoINSS + descontoPFamilia; // Total de descontos
  totalSalFamilia = (numeroFilhos * salarioFamilia);

  printf("Funcionario: %s \n", funcionario);
  printf("Salario bruto: %2.f \n", salarioBruto);
  printf("Qde de Filhos: %i \n", numeroFilhos);
  printf("Salario familia: %1.f \n",salarioFamilia);
  printf("============================== \n");
  printf("INSS: %2.f \n",descontoINSS);
  printf("Plano de Saude: %1.f \n", descontoPFamilia);
  printf("============================== \n");
  printf("Total de descontos: %2.f \n",totalDescontos);
  printf("================================ \n");
  printf("Salario familia: %2.f \n",totalSalFamilia);
  printf("================================= \n");
  printf("Salario liquido: %2.f \n", salarioLiquido);
}