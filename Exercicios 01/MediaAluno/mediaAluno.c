#include <stdio.h>
#include <conio.h>

int main() {
  char aluno[20], disciplina[25];
  int bimestre;
  float nota1, nota2, nota3, media;

  printf("Digite o seu nome:");
  scanf("%s", &aluno);
  printf("Digite o nome da disciplina:");
  scanf("%s", &disciplina);
  printf("Digite o  numero do bimestre:");
  scanf("%i", &bimestre);
  
  printf("Qual a sua nota 1:");
  scanf("%f", &nota1);
  printf("Qual a sua nota 2:");
  scanf("%f", &nota2);
  printf("Qual a sua nota 3:");
  scanf("%f", &nota3);


  media = (nota1 * 2 + nota2 * 2 + nota3 * 2)/ 6;

  printf("Aluno: %s \n", aluno);
  printf("Disiplina: %s \n", disciplina);
  printf("Notas do %i \n", bimestre, "bimestre \n");
  printf("Sua media foi de %2.f", media);

}
