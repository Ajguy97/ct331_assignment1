
//question 3
#include <stdio.h>
#include "genericLinkedList.h"

void runTests(){
 printf("Tests running...\n\n");

 listElement* head = createEl("1" , 30);
 listElement* next = insertAfter(head, "2" , 30);
 insertAfter(next, "3" , 30);
 traverse("%s", head);
 printf("\n");


 /*
 printf("\nTesting getLength function\n\n");
 printf("Length of list : %d\n", getLength(head));

 printf("Testing Push function\n\n");
 push(head, 4, 30);
 traverse("%d", head);
 printf("\n");

 printf("Testing Pop function\n\n");
 pop(head);
 traverse("%d", head);
 printf("\n");

 printf("Testing Enqueue function\n\n");
 enqueue(head, 5, 30);
 traverse("%d", head);
 printf("\n");

 printf("Testing dequeue function\n\n");
 traverse("%d", head);
 printf("\n");
 dequeue(head);
 printf("\n");
 traverse("%d", head);
 printf("\n");
 */
 printf("\nTests complete.\n\n");
}
