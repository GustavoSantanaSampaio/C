#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int n=1,n2=1, n3=1,r,valores=0;


  while(valores != 20){{
        r = n2 + n + n3;  
        printf("%i + %i + %i = %i \n", n2, n, n3, r);
        n3 = r;

        valores = valores + 1;
    
      }
  }

  return 0;
}