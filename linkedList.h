#ifndef _LINKED_LIST
#define _LINKED_LIST

#include "stack.h"

typedef struct node{
	int index;
	Stack *stack;
	struct node *next;
}LinkedList;

//插入stack的位置，在連結串列的尾巴
void insertToList(LinkedList **list, LinkedList nodeData);

//回傳指定index的stack位置
LinkedList* getByIndex(LinkedList **list, int index);

#endif
