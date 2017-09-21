#include <stdio.h>

int main(int arg, char* argc[]){
  printf("Hello assignment1.\n");

  int Int;
  int* intPointer;
  long Long;
  double* doublePointer;
  char** charDoublePointer;

  printf("Size of int = %d \n", sizeof(Int));
  printf("Size of int = %d \n", sizeof(intPointer));
  printf("Size of int = %ld \n", sizeof(Long));
  printf("Size of int = %d \n", sizeof(doublePointer));
  printf("Size of int = %d \n", sizeof(charDoublePointer));



  return 0;
}
