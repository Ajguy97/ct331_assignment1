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
  listElement* poppedEl = pop(&l);
  printf("After : \n");
  traverse(l);
  printf("\n");
  printf("Popped element : ");
  traverse(poppedEl);
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
  listElement* deq = dequeue(l);
  printf("\n");
  printf("After : \n");
  traverse(l);
  printf("\n");
  printf("Deqeued element : ");
  traverse(deq);

  printf("\nTests complete.\n");
}

