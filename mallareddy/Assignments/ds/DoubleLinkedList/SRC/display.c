#include "header.h"
extern struct DoubleLinkedList *temp;
extern struct DoubleLinkedList *head;
int Display()
{
temp = head;
while(temp!=NULL) {  

    printf("%d\n",temp->data);

	    temp= temp->next;
}
		
}

