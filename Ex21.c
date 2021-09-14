#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  float P1, P2;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor da nota P1 ");
  scanf("%f", &P1);
  
  P2= (15 - P1)/2;
  printf("Voce precisa de %.2f para conseguir a nota minima", P2);
}


