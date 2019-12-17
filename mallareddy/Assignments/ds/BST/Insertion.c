#include "header.h"
struct binary *temp = NULL;
struct binary *ptr = NULL;

int newnode(int data)
{
	int ele = 0;

	struct binary *Newnode = NULL;
	Newnode = (struct binary *)malloc(sizeof(struct binary));

	printf ("Enter the element\n");
	scanf("%d", &ele);

	if (NULL == root) {
		
		Newnode -> data = ele;
		Newnode -> left = NULL;
		Newnode -> right = NULL;
	}  
}
int Insertion (int data)
{
	int ele = 0;
	struct binary *root = NULL;
	root = (struct binary *)malloc(sizeof(struct binary));

	if ( NULL == root) {

		root -> data = ele;
		root -> left = NULL;
		root -> right = NULL;
	} else if {
			if (data < temp -> data) {
				
				ptr = temp;
				temp = temp -> left;
				if (NULL == temp) {
					temp = (struct binary *)malloc(sizeof(struct binary));
					ptr -> left = temp;
					newnode(data);
				}
				Insertion(data);
	} else { 
		
		if (data > temp -> data) {
			
			ptr = temp;
			temp = temp -> right;

			if (NULL == temp) {
				
				ptr -> right = temp;
				Newnode(data);
			}
		Insertion(data);
	}
}
}
}

