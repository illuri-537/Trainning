#include "header.h"

//struct CLL *head = NULL;

//struct CLL *temp = NULL;

int main(void) {


		while(1) {


				int ch;

				printf("Enter choice\n1.insert\n2.delete\n3.display\n4.exit\n");

				scanf("%d",&ch);

				switch(ch) {

						case 1: insert();
								break;
						case 2: delete();
								break;

						case 3:display();
								break;
						case 4: exit(0);

						default:
								printf("enter valid choice\n");
							}
					}
		return 0;
}

