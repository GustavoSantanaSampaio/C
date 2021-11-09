#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int r;
  for (int n=0; n != 11; n++){
    r = 5 * n;
    printf("5 x %i = %i\n", n,r);
  }
 
  return 0;
}
