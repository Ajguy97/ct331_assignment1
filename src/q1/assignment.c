#include <stdio.h>

int main(int arg, char* argc[]){
  printf("Hello assignment1.\n");

  int Int;
  int* intPointer;
  long Long;
  double* doublePointer;
  char** charDoublePointer;

  printf("Size of int = %d \n", sizeof(Int));
  printf("Size of int pointer = %d \n", sizeof(intPointer));
  printf("Size of long = %ld \n", sizeof(Long));
  printf("Size of double pointer = %d \n", sizeof(doublePointer));
  printf("Size of char double pointer = %d \n", sizeof(charDoublePointer));



  return 0;
}
