#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

#include "stack.h"

/*typedef struct node{
    int value;
    struct node *next;
} node;*/

Stack* top(Stack **head) {
	if(*head == NULL) {
		printf("this stack is empty\n");
		return NULL;
	}

	return *head;
}

bool push(Stack **head, Stack nodeData){
	Stack *newnode = (Stack *)malloc(sizeof(Stack));
    //newnode->value = nodeData.value;
	newnode->scopeLevel = nodeData.scopeLevel;

    newnode->next = (*head);
    (*head) = newnode;
    return true;
}

Stack pop(Stack **head){
    if((*head) == NULL) {
		Stack empty;
        return empty;
	}

	Stack result;
	//result.value = (*head)->value;
	result.scopeLevel = (*head)->scopeLevel;

    Stack *temp = (*head);
    (*head) = (*head)->next;
    free(temp);
    return result;
}
