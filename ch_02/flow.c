#include <stdio.h>

int main(){
  int i = 0;
  while (i < 5){
    printf("Hello while: %i\n", i);
    i ++;
 }

  for (i=0; i < 5; i++){
    printf("Hello for: %i\n", i);
  }

  i = 0;
 do {
   printf("Hello do: %i\n", i);
   i ++;
 } while (i < 5);

 return 0;
}
