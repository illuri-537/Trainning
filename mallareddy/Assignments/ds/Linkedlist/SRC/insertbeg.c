#include "header.h"
extern struct LinkedList *head;
extern struct LinkedList *temp;
struct LinkedList *newbeg =NULL;
int insertbeg()
{
	int ele;
	printf("enetr the element:");
	scanf("%d",&ele);

	if(head!=NULL)
	{
		newbeg = (struct LinkedList*)malloc(sizeof(struct LinkedList));

		newbeg->data = ele;
		newbeg->next = head;
		head = newbeg;
	}
	printf("inserted successfully");
}
