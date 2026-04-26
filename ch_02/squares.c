#include <stdlib.h>
#include <stdio.h>
#include "utility_fns.h"
/*
compile with
gcc -g -Wall -Werror -std=gnu99 print_array.c utility_fns.c -lm -o print_array
gcc -g -Wall -Werror -std=gnu99 squares.c utility_fns.c -o squares
To declare a pointer to an integer, use int *k
Outside the declarations, to refer to the integer being pointed to, use *k
Outside the declarations, to refer to the pointer itself, use k
*/


void swap(int a, int b, int a_list[]){
  int temp1;
  int temp2;
  temp1 = a_list[a];
  temp2 = a_list[b];
  printf("temp1 = %i\n", temp1);
  printf("temp2 = %i\n", temp2);
  a_list[a] = temp2 ;
  a_list[b] = temp1;
  /* a_list[b] = temp;  */
  /* a_list[a] = a_list[b];  */
  /* a_list[b] = temp;  */
}


int main(){
  int array_length=10;
  int *squares = malloc(array_length * sizeof(int));

  for (int i=0; i < array_length; i++){
    squares[i] = i * i;
  }
  swap(7, 8, squares);  

  print_array(array_length, squares);
  return 0;
}
