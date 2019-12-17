#include "header.h"

struct CLL *head = NULL;

struct CLL *temp = NULL;

struct CLL *new = NULL;

int insert()
{	
	
	int ele;

//	head = (struct CLL*)malloc(sizeof(struct CLL));

	temp = (struct CLL*)malloc(sizeof(struct CLL));

	 
	new = (struct CLL*)malloc(sizeof(struct CLL));

	printf("enter element:\n");

	scanf("%d",&ele);


	if(NULL == head) {
		printf("g");
	head = (struct CLL*)malloc(sizeof(struct CLL));
		

			head -> data = ele;

			head -> next = head;

		//	head = temp;



	}

	else {
			temp = head;

			while(temp -> next !=head) {

					temp = temp -> next;
			}

		//	temp = head;

			new -> data = ele;
			
			temp -> next  = new;

			new -> next = head;
		}

		printf("inserted succesfully\n");

}


