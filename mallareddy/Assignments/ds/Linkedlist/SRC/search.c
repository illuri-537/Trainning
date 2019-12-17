#include "header.h"
extern struct LinkedList *head;

extern struct LinkedList *temp;

int search()
{

	int key = 45;
	if(temp -> data != key) {

		temp = temp -> next;
	}

	else

		printf("found");


return 0;
}

