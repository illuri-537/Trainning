#include "header.h"

 //struct nnode *ptr1 = NULL;
 //struct nnode *ptr2 = NULL;

int reverse(struct node *head)
{
	SL *ptr1 = NULL;
	SL *ptr2 = NULL;
	while (ptr1 == NULL) {
		
			ptr1 = (SL *)malloc(sizeof(SL));
			ptr1 = (SL *)malloc(sizeof(SL));
			ptr2 = head->next;
			head->next = ptr2->next;
			ptr2->next = head;
			ptr1 = ptr2;
	}
	while (head->next!=NULL)
	{
			ptr2 = head->next;
			head->next = ptr2->next;
			ptr2->next = ptr1;
			ptr1 = ptr2;
	}
	return 0;
}




