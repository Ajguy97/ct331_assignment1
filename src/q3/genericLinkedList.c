#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericLinkedList.h"

typedef struct listElementStruct {
	void* data;
	size_t size;
	printFunction print;
	struct listElementStruct* next;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size,printFunction print) {
	listElement* e = malloc(sizeof(listElement));
	if (e == NULL) {
		//malloc has had an error
		return NULL; //return NULL to indicate an error.
	}
	
	void* dataPointer = malloc(size);
	if (dataPointer == NULL) {
		//malloc has had an error
		free(e); //release the previously allocated memory
		return NULL; //return NULL to indicate an error.
	}
	memmove(dataPointer, data,size);
	e->data = dataPointer;
	e->size = size;
	e->print = print;
	e->next = NULL;
	return e;
}

//Prints out each element in the list
void traverse(listElement* start) {
	listElement* current = start;
	while (current != NULL) {
		current->print(current->data);
		current = current->next;
	}
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, void* data, size_t size,printFunction print) {
	listElement* newEl = createEl(data, size,print);
	listElement* next = el->next;
	newEl->next = next;
	el->next = newEl;
	return newEl;
}


//Delete the element after the given el
void deleteAfter(listElement* after) {
	listElement* delete = after->next;
	listElement* newNext = delete->next;
	after->next = newNext;
	//need to free the memory because we used malloc
	free(delete->data);
	free(delete);
}

int getLength(listElement* list) {
	int length = 0;
	listElement* current = list;
	while (current != NULL) {
		current = current->next;
		length++;
	}
	return length;
}


//Push a new element onto the head of a list
void push(listElement** list, void* data, size_t size,printFunction print) {
	listElement* newEl = createEl(data, size,print);
	newEl->next = *list;
	*list = newEl;
}
//Pop an element from the head of a list.
listElement* pop(listElement** list) {
	listElement* head = *list;
	listElement* poppedElement = createEl(head->data, head->size,head->print);
	listElement* newHead = head->next;
	*list = newHead;

	free(head->data);
	free(head);
	return poppedElement;
}

void enqueue(listElement** list, void* data, size_t size,printFunction print) {
	listElement* newEl = createEl(data, size,print);
	newEl->next = *list;
	*list = newEl;
}

listElement* dequeue(listElement* list) {
	listElement* current = list;
	//store dequeued element
	listElement* deq;
	//find the last element and free that data inside it
	while (current != NULL) {
		if (current->next->next == NULL) {
			deq = createEl(current->next->data, current->next->size,current->next->print);
			free(current->next->data);
			free(current->next);
			current->next = NULL;
		}
		current = current->next;
	}
	return deq;
}









