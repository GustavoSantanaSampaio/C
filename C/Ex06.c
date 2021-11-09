#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  float a, b, c, d, e, total, pago, troco;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);

  printf("Digite o segundo valor: ");
  scanf("%f", &b);

  printf("Digite o terceiro valor: ");
  scanf("%f", &c);

  printf("Digite o quarto valor: ");
  scanf("%f", &d);

  printf("Digite o primeiro valor: ");
  scanf("%f", &e);

  printf("Digite o valor pago: ");
  scanf("%f", &pago);

  total = (a+b+c+d+e);

  troco = (total - pago);

  // Exibe o resultado final
  printf("o valor do troco e %.2f", troco);

  return 0;
}