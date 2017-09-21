#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct listElementStruct listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size);

//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, char* data, size_t size);

//Delete the element after the given el
void deleteAfter(listElement* after);

//Returns the number of elements in a linked list
int getLength(listElement* list);

//Push a new element onto the head of a list.
//Update the list reference using side effects.
void push(listElement* list, char* data, size_t size);

void pop(listElement* list);void enqueue(listElement* list, char* data, size_t size);void dequeue(listElement* list);
#endif
