#ifndef _STACK
#define _STACK

#include "compiler_common.h"

typedef struct node{
	Object value;
	struct node *next;
}Stack;

bool push(Stack **head, Object value);
Object pop(Stack **head);

#endif
