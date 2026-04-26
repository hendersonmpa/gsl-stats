#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <malloc.h>


void print_array(int upto, int a_list[]){
  int ct;
  for (ct=0; ct <= upto; ct++){
    a_list[ct] = pow(ct,2);
    printf("%i squared is %i\n", ct, a_list[ct]);
  }
}


void astrncpy(char **base, char *copyme){
  int l;
  l=strlen(copyme);
  base = realloc(base, sizeof(char)*l);
  strncpy(copyme, *base, l);
}


int main(){
  char first[]="Matthew";
  char last[]="Henderson";
  printf("%s\n",first);
  astrncpy(*first, last);
  printf("%s\n",first);
  return 0;
}
