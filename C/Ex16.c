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

  if(V1==V2){
      if(V1==V3){
          printf("Triangulo equilatero");
      }
      else{
          printf("Triangulo isosceles");
      }
   
    }  
  else if(V1 == V3){
      printf("Triangulo isosceles");
  }
  else{
      printf("Triangulo Escaleno");
  }
  
  return 0;
}