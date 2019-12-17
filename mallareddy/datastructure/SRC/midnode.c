#include "header.h"

int midnode (struct node *head)
{	
	SL *ptr1 = NULL;
	SL *ptr2 = NULL;
	if (head == NULL) {
		return -1;
	}
	ptr1 = head;
	ptr2 = head;
	if (ptr1 ->next == NULL || ptr1->next->next == NULL) {

				printf("%d\n",ptr2->data);
	}

	while (ptr1->next->next != NULL) {
			ptr1 = ptr1->next->next;
			ptr2 = ptr2->next;
	}
	if (ptr1->next->next == NULL&&ptr2->next != NULL) {
			printf("%d\n",ptr2->data);
}


	return 0;
}

