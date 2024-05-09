#ifndef _STACK
#define _STACK

#include "compiler_common.h"

typedef struct stackNode{
	//Object value;
	int scopeLevel;

	struct stackNode *next;
}Stack;

Stack* top(Stack **);
bool push(Stack **, Stack);
Stack pop(Stack **);

#endif
