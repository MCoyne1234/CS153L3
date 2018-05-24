#include "types.h"
#include "user.h"

int main(int argc, char *argv[]){
  int array[100] ;
  array[0] = 1;
  array[99] = 999;
  
  int num = 6;

  printf(1, "MEMORY ADDRESS of %d : %d\n", array[0], &(array[0]) );
  printf(1, "MEMORY ADDRESS of %d : %d\n", array[99], &(array[99]) );
  printf(1, "MEMORY ADDRESS of %d : %d\n", num, &num);
  //printf(1, "MEMORY ADDRESS of\n");
  //printf(1, "PGSIZE: %d", PGSIZE);
  return 0;
}
