
//question 3
#include <stdio.h>
#include "genericLinkedList.h"

void printString(void* data) {
	printf("%s\n", data);
}

void printChar(void* data) {
	printf("%c\n", *(char*)data);
}

void printInt(void* data) {
	printf("%d\n", *(int*)data);
}
void printFloat(void* data) {
	printf("%f\n", *(float*)data);
}

void printDouble(void* data) {
	printf("%f\n", *(double*)data);
}



void runTests(){
listElement* l = createEl(1, 30, printInt);
traverse(l);
/*
 printf("Tests running...\n\n");
 printf("Creating 1 2 3...\n");
 listElement* l = createEl("(1)", 30,printString);
 printf("\n");

 //Test insert after
 listElement* l2 = insertAfter(l, "(2)", 30, printString);
 insertAfter(l2, "(3)", 30, printString);
 traverse(l);
 printf("\n");

 printf("Testing get Length function\n\n");
 printf("Length of list = %d\n", getLength(l));
 printf("\n");

 printf("Testing Push function\n\n");
 printf("Before : \n");
 traverse(l);
 printf("\n");
 push(&l, "4", 30, printString);
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
 enqueue(&l, "5", 30, printString);
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


 printf("\nTests complete.\n\n");
 */
}
