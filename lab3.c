#include "types.h"
#include "user.h"

int test(int n)
{ 
   int x = n + 1;
   return x;
}

int main(int argc, char *argv[]){
  int array[100] ;
  array[0] = 1;
  array[99] = 999;
  
  int num = 6;

  printf(1, "Value and MEMORY ADDRESS of arra[0] %d : %d\n", array[0], &(array[0]) );
  printf(1, "value and MEMORY ADDRESS of array[99] %d : %d\n", array[99], &(array[99]) );
  printf(1, "MEMORY ADDRESS of %d : %d\n", num, &num);
  
  int arr2[8000];
  arr2[0] = 111;
  arr2[7999] = 888;
  printf(1, "Value and MEMORY ADDRESS of arr2[7999]: %d: %d\n", arr2[7999], &(arr2[7999]));
  

 int pid=0;
   pid=fork();
   if(pid==0){
       test(1);
       exit();
   }
   wait();
   exit();

  return 0;
}
