// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  int a, b, c, d, resultado;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor: ");
  scanf("%i", &a);
  
  
  printf("Digite o valor: ");
  scanf("%i", &b);

  printf("Digite o valor: ");
  scanf("%i", &c);

  printf("Digite o valor: ");
  scanf("%i", &d);

  resultado = (a+b+c+d)/4;

  // Exibe o resultado final
  printf("A area do triangulo e de %i", resultado);

  return 0;
}