#include "header.h"
struct LinkedList *head =NULL;
struct LinkedList *temp =NULL;
struct LinkedList *newnode =NULL;
int count = 0;

int Insert()
{
	int ch;
//	scanf("%d",&ch);
	while(1)
	{
		printf("\nEnter your choice\n 1:create node\n2:Display\n 3:Insert at the beginning\n4: insert at the position\n5: Delete\n 6:search\n7.exit\n");
		scanf("%d",&ch);
		switch(ch){
				
				case 1:Create_node();
						break;
				case 2:Display();
						break;
				case 3:insertbeg();
						break;
				case 4:insert_pos();
						break;
				case 5: Delete();
						break;
				case 6:search();
						break;
				case 7:exit(0);
				default: printf("please,Enter valid input");
			}
	}
return 0;
}



int Create_node()
{
	int ele;
	//head = (struct LinkedList*)malloc(sizeof(struct LinkedList));

	temp = (struct LinkedList*)malloc(sizeof(struct LinkedList));


	printf("Enter the element: ");
	scanf("%d",&ele);
	if(head == NULL)
	{
		head = (struct LinkedList*)malloc(sizeof(struct LinkedList));

		 temp = head;
		 temp->data = ele;
		 temp->next = NULL;
		 count++;
	}
	else
	{
		newnode = (struct LinkedList*)malloc(sizeof(struct LinkedList));


		temp = head;
		while(temp->next!=NULL)

		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->data = ele;
		newnode->next = NULL;
		count++;
	}
	printf("%d",head->data);
	printf("count = %d\n",count);

printf("Inserted successfully at beginning");
}

int Display()
{
temp = head;
while(temp->next!=NULL)
{
	printf("%d\n",temp->data);

	temp= temp->next;
}
printf("%d\n",temp->data);
}

