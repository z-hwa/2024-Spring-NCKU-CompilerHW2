#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

#include "stack.h"

/*typedef struct node{
    int value;
    struct node *next;
} node;*/

bool push(Stack **head, Object value){
    Stack *newnode = malloc(sizeof(Stack));
    newnode->value = value;
    newnode->next = (*head);
    (*head) = newnode;
    return true;
}

Object pop(Stack **head){
    if((*head) == NULL) {
		Object empty;
		empty.type = OBJECT_TYPE_VOID;
        return empty;
	}

    Object result = (*head)->value;
    Stack *temp = (*head);
    (*head) = (*head)->next;
    free(temp);
    return result;
}
