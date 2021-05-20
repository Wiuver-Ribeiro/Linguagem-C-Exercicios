#include <stdio.h>

 int main() {
   float Km, tempoPercorrido, QtdLitros, velocidadeMedia, consumoVeiculo;

  printf("========CONSUMO DO VEICULO======== \n");
  printf(" Quanto Km: ");
  scanf("%f", &Km);
  printf(" Tempo percorrido:");
  scanf("%f", &tempoPercorrido);
  printf(" Qtd litros consumidos:");
  scanf("%f", &QtdLitros);

  velocidadeMedia = Km/tempoPercorrido;
  consumoVeiculo = Km/QtdLitros;

  printf("========================================================\n"); 
  printf("|| A velocidade media e de : %2.f \n",velocidadeMedia, "||");
  printf("|| O consumo do veiculo e de : %2.f \n",consumoVeiculo,"||");
  printf("==========================================================");



 }