#include <stdio.h>
int fun(int a);
int main(void)
{
	
	void (*fun_pointer)(int) = NULL;
	fun_pointer = fun;
	(*fun_pointer)(19);
	return 0;

}

int fun(int a)
{
	a++;
	printf("%d\n", a);
	return 0;
}


