#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int n=1,n2=1,r;


  while(n != 514229){{
        r = n2 + n;  
        printf("%i + %i = %i \n", n2, n, r);
        n = n2;
        n2 = r;
    
      }
  }

  return 0;
}