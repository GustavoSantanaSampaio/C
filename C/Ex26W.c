#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int n=0, r, valor;
  printf("Digite um valor positivo: ");
  scanf("%i", &valor);

  while(valor<0){
      printf("Digite um valor positivo: ");
      scanf("%i", &valor);
  }

  while(n!=11){
    r = valor * n;
    printf("%i x %i = %i\n",valor, n,r);
    n = n + 1;
  }
 
  return 0;
}