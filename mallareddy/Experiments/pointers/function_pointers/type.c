#include <stdio.h>
typedef int (*funp)(int, int);
int add(int, int);
int sub(int, int);
int mul(int,int);

//int (*funp[])(int, int);

int main(void)
{

	int choice = 0;
	int var1 = 0;
	int var2 = 0;
	int ret = 0;
//	funp ptr[];

	//int	(*funp[])(int, int) = {add, sub, mul};
		funp ptr[] = {add, sub,mul};

	printf("Enter choice\n 0.addition\n1.subtraction\n2.multiplication\n");
	scanf("%d",&choice);

	if (choice <= 2)
	ret = (ptr[choice])(12,24);

	printf("%d\n", ret);
	return 0;
}

int add(int var1, int var2)
{
	return var1 + var2;
}

int sub(int var1, int var2)
{
	return var1 - var2;
}

int mul(int var1, int var2)
{
	return var1 * var2;
}

	
