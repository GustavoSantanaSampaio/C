#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  int V1, V2, V3;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro valor: ");
  scanf("%i", &V1);

  printf("Digite o segundo valor: ");
  scanf("%i", &V2);

  printf("Digite o terceiro valor: ");
  scanf("%i", &V3);

  if(V3>V1){
      if(V3>V2){
          printf("O maior valor digitado foi %i", V3);
      }
      else{
          printf("O maior valor digitado foi %i", V2);
      }
    }  
  else{
      if(V1>V2){
      printf("O maior valor digitado foi %i",V1);    
      }
      else{
          printf("O maior valor digitado foi %i",V2);
      }
    }
  return 0;
}