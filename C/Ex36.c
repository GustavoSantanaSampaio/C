#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  // Declarando o vetor 
  int numeros[20];
  int multiplicador;
  int resultado[20];
  
  // Looping para popular o vetor
  printf("Digite os 10 numeros: ");
  for(int i=0; i<20; i++){
      scanf("%i", &numeros[i]);
  printf("Deve multiplicar por quanto? \n");
  scanf("%i", &multiplicador);
    resultado[i] = numeros[i] * multiplicador;
  }
 
  // Looping para exibir os valores do vetor
  printf("Os numeros digitados multiplicados pelos respectivos valores:  ");
  for(int i=0; i<20; i++){
      printf("%i \n", resultado[i]);
  }


  return 0;
}