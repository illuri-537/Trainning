#include "header.h"

int main(void)
{

	int choice = 0;

	printf (" Enter choice\n1.Insertion\n2.Deletion\n3.Display\n4.exit\n");
	scanf("%d", &choice);

	switch (choice) {

	case 1:
		Insertion();
		break;
	case 2:
		Deletion();
		break;
	case 3:
		Display();
		break;
	case 4:
		exit(0);
	default:
		printf("Enter valid input\n");
		break;
	}

	return 0;
}
		
