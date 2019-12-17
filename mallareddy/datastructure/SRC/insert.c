#include "header.h"

int insert(void)
{

	SL *head = NULL;

		int ch; 
		//  scanf("%d",&ch);
		while (1) {
				printf("\nEnter your choice\n 1:create node\n2:ascending\n3:Display\n 4:nnode\n5.middle node\n6.reversee\n7.Displayr\n8.exit\n");
				scanf("%d",&ch);
				switch (ch) {

						case 1:Create_node(head);
							   break;
//						case 2:ascending();
							   break;
						case 3:Display();
							   break;
						case 4:nnode1(head);
							   break;
						case 5:midnode(head);
							   break;

						case 6:reverse(head);
							   break;
						case 7:Displayr();
							   break;
						case 8:exit(0);
						default: printf("please,Enter valid input");
				}
		}

		return 0;
}
/*
int ascending(void)
{
		int ele;
		ptr1 = (struct node*)malloc(sizeof(struct node));
		printf("enter the element\n");
		scanf("%d",&ele);
		if (head == NULL) {

			head = (struct node*)malloc(sizeof(struct node));
			ptr1 = head;
			ptr1 -> data = ele;
			ptr1 -> next = NULL;
		}
		else
		{
		
				while(ptr1->next!=NULL)

				{
						ptr1 = ptr1->next;
			
//		ptr2->data = ele;

		ptr2 = (struct node*)malloc(sizeof(struct node));
		ptr2->data = ele;
		if (ptr1 -> data < ptr2 -> data) {
				ptr1 -> next =ptr2;
				ptr2 -> next = NULL;
		}

		else {
				ptr2 -> next = ptr1;
				head = ptr2;
				ptr1 = ptr2;
		}
		
	printf("inserted successfully\n");
	return 0;
}*/

	
