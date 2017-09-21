//question 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericLinkedList.h"

typedef struct listElementStruct {
	void* data;
	size_t size;
	struct listElementStruct* next;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size) {
	listElement* e = malloc(sizeof(listElement));
	if (e == NULL) {
		//malloc has had an error
		return NULL; //return NULL to indicate an error.
	}
	void* dataPointer = malloc(sizeof(data)*size);
	if (dataPointer == NULL) {
		//malloc has had an error
		free(e); //release the previously allocated memory
		return NULL; //return NULL to indicate an error.
	}
	strcpy(dataPointer, data);
	e->data = dataPointer;
	e->size = size;
	e->next = NULL;
	return e;
}

//Prints out each element in the list
void traverse(char* formatString, listElement* start) {
	listElement* current = start;
	while (current != NULL) {
		printf(formatString ,"\n", current->data);
		current = current->next;
	}
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, void* data, size_t size) {
	listElement* newEl = createEl(data, size);
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
void push(listElement* list, void* data, size_t size) {
	//making new element
	listElement* head = list;
	listElement* newEl = createEl(data, size);

	//setting new element as the head
	listElement temp = *newEl;
	*newEl = *head;
	*head = temp;

	//head now needs to point to newEl which is the old head
	head->next = newEl;

}
//Pop an element from the head of a list.
void pop(listElement* list) {
	listElement* delete = list;
	listElement* newHead = delete->next;

	listElement temp = *newHead;
	*newHead = *delete;
	*delete = temp;
}

void enqueue(listElement* list, void* data, size_t size) {
	//making new element
	listElement* head = list;
	listElement* newEl = createEl(data, size);

	//setting new element as the head
	listElement temp = *newEl;
	*newEl = *head;
	*head = temp;

	//head now needs to point to newEl which is the old head
	head->next = newEl;
}

void dequeue(listElement* list) {
	int length = getLength(list);
	//this is to loop through to find the last element and free it
	listElement* current = list;
	//this is to loop through and find the 2nd last element and set next->NULL
	listElement* current2 = list;

	int i = 1;
	//find the last element and free that data inside it
	while (current != NULL && i <= length) {
		if (current->next == NULL && i == length) {
			free(current->data);
			free(current);
		}
		i++;
		current = current->next;
	}
	//find 2nd last element and set next to null
	int j = 1;
	while (current2 != NULL && j <= length) {
		if (j == length - 1) {
			current2->next = NULL;
		}
		j++;
		current2 = current2->next;
	}
}











