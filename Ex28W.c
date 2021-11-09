#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int r, n, n2;
char tecla;
  printf("Pressione alguma tecla: ");
  getch();
  n = 1;
  n2 = 1;
  while(n != 21){
      while(n2 != 11){
        r = n * n2;  
        printf("%i * %i = %i \n", n, n2, r);
        n2 = n2 + 1;
      }
      n = n + 1;
      n2 = 1;
  }

  return 0;
}