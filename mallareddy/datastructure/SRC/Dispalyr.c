#include "header.h"
int Displayr(SL *ptr1,SL *ptr2)
{	
	//	SL *ptr1 = NULL;
	//	SL *ptr2 = NULL;
		ptr1 = (SL *)malloc(sizeof(SL));
		ptr2 = (SL *)malloc(sizeof(SL));

		ptr1 = ptr2;
		while (ptr1->next != NULL) {
				printf("%d\n",ptr1->data);
				ptr1= ptr1->next;
		}
		printf("%d\n",ptr1->data);
}

