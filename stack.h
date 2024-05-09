#ifndef _STACK
#define _STACK

#include "compiler_common.h"

typedef struct stackNode{
	Object value;
	struct stackNode *next;
}Stack;

bool push(Stack **head, Object value);
Object pop(Stack **head);

#endif
