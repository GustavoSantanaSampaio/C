// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  int temp, conversao;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor da temperatura em grau celsius: ");
  scanf("%i", &temp);

  conversao = (temp * 1.8) + 32;

  // Exibe o resultado final
  printf("o valor da temperatura em Farenheit %i", conversao);

  return 0;
}