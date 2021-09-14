#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  float P1, P2, Media;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o valor da nota P1 ");
  scanf("%f", &P1);
  
  printf("Digite o valor da nota P2 ");
  scanf("%f", &P2);

  Media = (P1 + 2*P2)/3;
  


  if(Media >= 5){
      printf("Aprovado.");
    }
    else{
        printf("Reprovado.");
    }
  
}