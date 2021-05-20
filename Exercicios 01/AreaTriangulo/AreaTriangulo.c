#include <stdio.h>

int main() {
  int base, altura;
  float area;

  printf("Qual e o valor da base: ")/
  scanf("%d", &base);
  printf("Qual e o valor da altura: ")/
  scanf("%d", &altura);

  area = (base * altura)/2;

  printf("A area do triangulo e de : %2.f", area);
}