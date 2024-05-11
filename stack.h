#ifndef _STACK
#define _STACK

#include "compiler_common.h"

typedef struct stackNode{
	//Object value;
	int scopeLevel;
	const char *msg;

	struct stackNode *next;
}Stack;

Stack* top(Stack **stack);
bool push(Stack **stack, Stack data);
Stack pop(Stack **stack);

#endif
