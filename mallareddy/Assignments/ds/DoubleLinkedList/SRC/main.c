#include "header.h"

int main()
{
		int ch; 
		//  scanf("%d",&ch);
		while(1)
		{   
				printf("Enter your choice\n1:Display\n 2:Insert\n3:Delete\n");
				scanf("%d",&ch);    
				switch(ch){

			            case 1:Display();
		                       break;
						case 2:Insert();
							   break;
//						case 3:Delete();
//							   break;
						case 4:exit(0);
								break;
						default : printf("please,Enter valid input\n");
				}
		}   
		return 0;
}

