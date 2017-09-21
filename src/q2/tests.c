#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
  listElement* l = createEl("(1)", 30);
  //printf("%s\n%p\n", l->data, l->next);
  //Test create and traverse
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "(2)", 30);
  insertAfter(l2, "(3)", 30);
  traverse(l);
  printf("\n");


  printf("Testing Push function\n");
  push(l, "4", 30);
  traverse(l);
  printf("\n");

  printf("Testing Pop function\n");
  pop(l);
  traverse(l);
  printf("\n");

  printf("Testing Enqueue function\n");
  enqueue(l, "5", 30);
  traverse(l);
  printf("\n");

  printf("Testing dequeue function\n");
  traverse(l);
  printf("\n");
  dequeue(l);
  printf("\n");
  traverse(l);
  printf("\n");



  /*
  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");

  //Test push
  push(l, "4th string", 30);
  push(l, "5th string", 30);
  
  traverse(l);
  printf("\n");

  */

  printf("\nTests complete.\n");
}
