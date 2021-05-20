#include <stdio.h>

int main() {
  char produto[30];
  float preco, taxaDesconto, desconto, prodDesconto;

  printf("========MERCADAO DA ILUSAO======== \n");
  printf("Nome do produto: ");
  scanf("%s", &produto);
  printf("Preco do produto: ");
  scanf("%f", &preco);
  printf("Taxa de desconto: ");
  scanf("%f", &taxaDesconto);
  desconto = (preco * (taxaDesconto/100));
  prodDesconto = preco - desconto;
  printf("Produto: %s \n ", produto);
  printf("Preco: %2.f \n", preco);
  printf("Taxa de Desconto: %2.f \n", taxaDesconto);
  printf("================================== \n");
  printf("Desconto: %2.f \n", desconto);
  printf("Valor final: %2.f \n", prodDesconto);
}