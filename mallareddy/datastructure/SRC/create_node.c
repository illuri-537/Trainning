#include "header.h"

int Create_node(SL *head)
{	
	SL *ptr1 = NULL;
	SL *ptr2 = NULL;
	int ele;
	ptr1 = (SL *)malloc(sizeof(SL));
	printf("Enter the element: ");
	scanf("%d",&ele);
	if (head == NULL) {
			head = (SL*)malloc(sizeof(SL));
			ptr1 = head;
			ptr1->data = ele;
			ptr1->next = NULL;
	}
	else {
			ptr2 = (SL *)malloc(sizeof(SL));
			ptr1 = head;
			while (ptr1->next != NULL) {
					ptr1 = ptr1->next;
			}
			ptr1->next = ptr2;
			ptr2->data = ele;
			ptr2->next = NULL;
	}	

	printf("Inserted successfully ");
}

