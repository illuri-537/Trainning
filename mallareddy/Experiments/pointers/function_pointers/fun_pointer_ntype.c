#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int notypedef(int, int, int (*fptr)(int, int));
int main(void)
{
	int var1 = 0;
	int var2 = 0;
	int ret = 0;
	int ret1 = 0;
	int ret2 = 0;
	ret = notypedef(10, 20, add);
	ret1 = notypedef(20, 21, sub);
	ret2 = notypedef(30, 2, mul);

	printf("%d\n",ret);
	printf("%d\n",ret1);
	printf("%d\n",ret2);

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

int notypedef(int var1, int var2, int (*fptr)(int, int))
{
	return (*fptr)(var1,var2);
}



