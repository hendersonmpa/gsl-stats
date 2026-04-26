#include <stdio.h> //printf
#include <malloc.h> //malloc
/*
compile with 
gcc -g -Wall -Werror -std=gnu99 swap.c -o swap
To declare a pointer to an integer, use int *k
Outside the declarations, to refer to the integer being pointed to, use *k
Outside the declarations, to refer to the pointer itself, use k
*/

void swap(int *a, int *b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void){
  int *first = malloc(sizeof(int));
  *first = 1;
  int *second = malloc(sizeof(int));
  *second = 2;
  
  printf("first = %i\n", *first);
  printf("second = %i\n", *second);

  printf("swap!\n");
  swap(first, second);

  printf("first = %i\n", *first);
  printf("second = %i\n", *second);

  return 0;
}
