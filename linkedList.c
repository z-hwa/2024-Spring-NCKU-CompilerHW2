#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

void insertToList(LinkedList **list, LinkedList nodeData) {
	// 建立新節點
    LinkedList *newNode = (LinkedList *)malloc(sizeof(LinkedList *));
	
    newNode->stack = nodeData.stack;
    newNode->index = nodeData.index;
	newNode->next = NULL;

    // 如果連結串列是空的，則將新節點設置為頭部
    if (*list == NULL) {
        *list = newNode;
        return;
    }

    // 否則找到最後一個節點，並將新節點連結到它後面
    LinkedList *lastNode = *list;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
	}
	
    lastNode->next = newNode;	
}

LinkedList* getByIndex(LinkedList **list, int index) {
	if(*list == NULL) {
		printf("this is a empty list");
		return NULL;
	}

	//using pointer to find the stack
	LinkedList *pointer = *list;
	int counter = 0;
	bool find = false;

	while(pointer->next != NULL) {
		if(counter == index) {
			find = true;
			break;
		}	

		pointer = pointer->next;
		counter++;
	}

	if(find == true) return pointer;
	else return NULL;
}
