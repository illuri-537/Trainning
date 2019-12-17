#include <stdio.h>
int add(int, int );
int sub(int, int);
int (*fun1)(int, int);
int main(void)
{	
	int c;
	int a = 10;
	
	int b = 20;
	fun1 = add;
	c =(*fun1)(a,b);

	printf("%d\n",c);

	return 0;
}
int add(int a, int b,)
{
	return a+b;
}
int sub(int a, int b)
{
	return 0;
}

