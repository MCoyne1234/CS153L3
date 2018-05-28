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
  
  int arr2[8000];
  arr2[0] = 111;
  arr2[7999] = 8888;

  printf(1, "value and MEMORY ADDRESS of array[99] %d : %d\n", array[99], &(array[99]) );
  printf(1, "Value and MEMORY ADDRESS of array[00] %d : %d\n", array[0], &(array[0]) );
 
   printf(1, "MEMORY ADDRESS of %d : %d\n", num, &num);
  
  printf(1, "Value and MEMORY ADDRESS of arr2[7999]: %d: %d\n", arr2[7999], &(arr2[7999]));
  printf(1, "Value and MEMORY ADDRESS of arr2[0000]: %d: %d\n", arr2[0], &(arr2[0]));
  
///*
 int pid=0;
  printf(1, "PID: %d\n", getpid() );
  
  pid=fork();
  //printf(1, "PID AFTER: %d\n", getpid());
  
   if(pid==0){
       test(1);
       exit();
   }
   wait();
   printf(1, "PID EXITING: %d\n", getpid());
   exit();
//*/
  return 0;
}
