#include "header.h"

extern struct CLL *head;

extern struct CLL *temp;

extern struct CLL *new;

int delete()
{

	temp = head;

	while(temp -> next != head) {
			
			free(temp);

			temp = new;

			// -> next = head;
	}

}

