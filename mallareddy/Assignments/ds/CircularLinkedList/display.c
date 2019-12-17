#include "header.h"

extern struct CLL *temp;

extern struct CLL *head;


int display()

{

	temp = head;

	while(temp -> next != head) {


		printf("%d\n",temp -> data);

		temp = temp -> next;

	}

	printf("%d\n",temp -> data);
}
