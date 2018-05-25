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
  
  int arr2[2000];
  arr2[0] = 111;
  arr2[1999] = 888;
  printf(1, "MEMORY ADDRESS of\n");
  printf(1, "MORE NUMBERS: %d: %d\n", arr2[1999], &(arr2[1999]));
  return 0;
}
