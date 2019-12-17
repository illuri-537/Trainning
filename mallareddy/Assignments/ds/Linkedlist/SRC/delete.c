#include "header.h"
extern struct LinkedList *temp;
extern struct LinkedList *head;
int Delete()
{
//	char str[10] = "success";
//	char str1[10] = "empty";
	if(head == NULL) { 
	
		printf("empty\n");
	
	}
	else if(head->next==NULL) {
	
		free(head);
		head =NULL;
	}
	else {
	

	while((temp->next)->next!=NULL) {
	
		temp = temp->next;
	}
	free(temp->next);
	temp->next =NULL;
	}
	printf("deleted successfully");
//	return str;
}
