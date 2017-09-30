#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n\n");
  printf("Creating 1 2 3...\n");
  listElement* l = createEl("(1)", 30);
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "(2)", 30);
  insertAfter(l2, "(3)", 30);
  traverse(l);
  printf("\n");

  printf("Testing get Length function\n\n");
  printf("Length of list = %d\n", getLength(l));
  printf("\n");

  printf("Testing Push function\n\n");
  printf("Before : \n");
  traverse(l);
  printf("\n");
  push(&l, "4", 30);
  printf("After : \n");
  printf("\n");
  traverse(l);
  printf("\n");

  printf("Testing Pop function\n\n");
  printf("Before : \n");
  traverse(l);
  printf("\n");
  pop(&l);
  printf("After : \n");
  traverse(l);
  printf("\n");

  printf("Testing Enqueue function\n\n");
  printf("Before : \n");
  traverse(l);
  printf("\n");
  enqueue(&l, "5", 30);
  printf("After : \n");
  traverse(l);
  printf("\n");

  printf("Testing dequeue function\n\n");
  printf("Before : \n");
  traverse(l);
  printf("\n");
  dequeue(l);
  printf("\n");
  printf("After : \n");
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

