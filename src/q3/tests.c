
//question 3
#include <stdio.h>
#include "genericLinkedList.h"

void runTests(){
  printf("Tests running...\n");
  listElement* head = createEl("1", 30);

  traverse("%s", head);
 
  
  printf("\nTests complete.\n");
}
