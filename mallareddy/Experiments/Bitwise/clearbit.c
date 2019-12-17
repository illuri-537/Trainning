#include<stdio.h>

int main(void)
{

	int num;
	int pos;
	int i = 0;
	int m = 0;

	printf("enter number\n");
	scanf("%d",&num);
	printf("enter position\n");
	scanf("%d",&pos);
	num = num >> 2;
//	num = ~(1<<pos) & num;
	

	for(i = 31; i>=0;i--) {

		m = num>>i;
		if(m&1)

		printf("1");

		else

		printf("0");


	}


	return 0;
}

