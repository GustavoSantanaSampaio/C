#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

  // Declaração de variáveis
  float peso, altura, imc;

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o peso: ");
  scanf("%f", &peso);

  printf("Digite a altura: ");
  scanf("%f", &altura);

  imc = peso/(altura*altura);

  if(imc<20){
      printf("Abaixo do peso");
    }  
  else if(imc>=20 && imc <25) {
      printf("Peso ideal");
    }
  else{
      printf("Acima do peso");
  }  
  printf("\n seu imc e %.2f", imc);
  return 0;
}