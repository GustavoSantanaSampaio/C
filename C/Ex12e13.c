#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  float base, altura, area;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor da base: ");
  scanf("%f", &base);

  printf("Digite o valor da altura: ");
  scanf("%f", &altura);

  area = base * altura;  

  if(area>100){
      printf("Terreno grande!");
    }  
  printf("\n O tamanho do terreno e %.2f", area);
  return 0;
}