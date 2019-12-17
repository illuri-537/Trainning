#include "header.h"
extern int  count;
extern struct LinkedList *head;
extern struct LinkedList *temp;
struct LinkedList *posnode=NULL;

insert_pos()
{
	int pos;
	int ele;
	printf("enter element:");
	scanf("%d",&ele);
	printf("enter position:");
	scanf("%d",&pos);
	posnode = (struct LinkedList*)malloc(sizeof(struct LinkedList));
//	posnode->data = ele;
	if(pos <= count)
	{
		posnode->data = ele;
		temp = head;
		while((temp->next!=NULL) && (pos>2))
		{
			temp = temp->next;
			pos--;
		}
		posnode->next = temp->next;
		temp->next = posnode;
	}
}
