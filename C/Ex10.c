#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  int V1, V2;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%i", &V1);

  printf("Digite o segundo valor: ");
  scanf("%i", &V2);

  if(V2<V1){
      printf("O maior valor digitado foi %i", V2);
    }  
  else{
      printf("O menor valor digitado foi %i",V1);
    }
  return 0;
}