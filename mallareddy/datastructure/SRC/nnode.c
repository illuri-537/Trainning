#include "header.h"
int  nnode1 (struct node *head)
{
	int var = 1;
	int n;
	SL *ptr1 = NULL;
	SL *ptr2 = NULL;
	ptr1 = (SL *)malloc(sizeof(SL));
	ptr2 = (SL *)malloc(sizeof(SL));
	printf("enter nth node\n");
	scanf("%d",&n);
	if (head == NULL) {
		return -1;

	}
	ptr1 = head;
	ptr2 = head;
	printf("%d\n",ptr2->data);

	while(var<= n-1 && ptr1->next->next != NULL) {
		ptr1 = ptr1->next;
		var++;
	}

	if (ptr1->next == NULL) {

		return -1;
	}

	while (ptr1->next != NULL) {
			ptr1 = ptr1->next;
			ptr2 = ptr2->next;
	}

	printf("%d\n",ptr2->data);
}



