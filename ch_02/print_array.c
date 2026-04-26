#include "utility_fns.h"

/*
compile with 
gcc -g -Wall -Werror -std=gnu99 print_array.c utility_fns.c -lm -o print_array
*/

int main(){
  int i = 100;
  int a_list[i+1];
  print_array(i, a_list); 
  /* for (i=0; i < 100; i++){ */
  /*   a_list[i] = pow(i,2); */
  /*   printf("%i squared is %i\n", i, a_list[i]); */
  /* } */
}
