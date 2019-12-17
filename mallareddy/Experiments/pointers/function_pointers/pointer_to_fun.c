#include <stdio.h>
int sum(int, int);

int main(void)
{	
	int  ret = 0;
	int ret1 = 0;
	int *ptr = NULL;
	int (*fptr)(int, int);
	fptr = sum;	
	ptr = sum;
	ret1 = *ptr(10,20);
	ret = (*fptr)(10,20);

	printf("%p\n", fptr);
	printf("%p\n", ptr);
	printf("%d\n",ret);

	return 0;

}

int sum(int var1, int var2)
{

	return var1 + var2;
}
