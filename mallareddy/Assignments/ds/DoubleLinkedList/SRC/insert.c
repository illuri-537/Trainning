#include "header.h"
struct DoubleLinkedList *head =NULL;
struct DoubleLinkedList *temp =NULL;
struct DoubleLinkedList *newnode =NULL;
int count = 0;

int Insert()
{
		int ch; 
		//  scanf("%d",&ch);
		while(1)
		{   
				printf("\nEnter your choice\n 1:create node\n2:Display\n 3:Insert at the beginning\n4: insert at the position\n5: Delete\n 6:exit\n");
				scanf("%d",&ch);
				switch(ch){

						case 1:Create_node();
							   break;
						case 2:Display();
							   break;
//						case 3:insertbeg();
//							   break;
//						case 4:insert_pos();
//							   break;
//						case 5: Delete();
//								break;
						case 6:exit(0);
						default: printf("please,Enter valid input");
				}
		}   
		return 0;
}
int Create_node()
{
		int ele;
		//head = (struct LinkedList*)malloc(sizeof(struct LinkedList));

		temp = (struct DoubleLinkedList*)malloc(sizeof(struct DoubleLinkedList));


		printf("Enter the element: ");
		scanf("%d",&ele);
		if(head == NULL)
		{
				head = (struct DoubleLinkedList*)malloc(sizeof(struct DoubleLinkedList));


				temp = head;
				head->data = ele;
				head->prev=NULL;
				head->next = NULL;
				count++;
		}
		else
		{
				newnode = (struct DoubleLinkedList*)malloc(sizeof(struct DoubleLinkedList));


				temp = head;
				while(temp->next!=NULL)

				{
						temp = temp->next;
				}
				temp->next = newnode;
				newnode->data = ele;
				newnode->prev = temp;

				temp->next = NULL;
				count++;
		}
	//	printf("%d",head->data);
}

