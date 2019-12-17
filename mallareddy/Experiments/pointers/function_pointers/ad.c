#include <stdio.h>
typedef int (*fun1)(int, int);
fun1 add(void );
int sub(int, int);
int main(void)
{	
	int var3;
	int var1 = 10;	
	int var2 = 20;
	fun1 ptr;
	ptr = add();
	var3 = (ptr)(10, 20);

	printf("%d\n",var3);

	return 0;
}
 fun1 add(void)
{
	return sub;
}
int sub(int var1, int var2)
{
	return var1 - var2;
}

