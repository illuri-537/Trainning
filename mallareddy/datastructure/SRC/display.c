#include "header.h"
int Display(SL *head)
{	
		SL *ptr1 = NULL;
		ptr1 = (SL *)malloc(sizeof(SL));
		ptr1 = head;
		while (ptr1->next != NULL) {
				printf("%d\n",ptr1->data);
				ptr1= ptr1->next;
		}
		printf("%d\n",ptr1->data);
		return 0;
}

