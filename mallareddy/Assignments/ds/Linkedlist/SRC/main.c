/**
*@file
*@brief This main function for calling all functions using switch case
*@param 
*@author Mallareddy
*/

#include "header.h"
int main()
{
	int ch;
//	scanf("%d",&ch);
	while(1)
	{
		printf("Enter your choice\n1:Display\n 2:Insert\n3:Delete\n4.Search\n5.Exit\n");
		scanf("%d",&ch);		
		switch(ch){
				
				case 1:Display(); /// dispaly() for listing all the nodes in the list.
						break;
				case 2:Insert(); /// Insert() for inserting nodes in the list.
						break;
				case 3:Delete(); /// Delete() for deleting the nodes in the list.
					break;
				case 4:search(); /// search() for searching node in the list.
						break;
				case 5:exit(0);
				default : printf("please,Enter valid input\n");
			}
	}
	return 0;
}


