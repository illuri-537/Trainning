#include <stdio.h>

int div (int, int, int(*funptr)(int, int, int (*funptr) (int,int)));
int mul (int, int, int(*funptr)(int, int));
int add (int, int);
int main(void)
{	
	int var1 = 0;
	int var2 =0;
	int (*funptr)(int, int) = mul;
	div (var1, var2, mul);
	return 0;
}

int div(int var, int var2, int (*funptr)(int, int, int (*funptr)(int,int)))
{	
	int retu = 0;
	retu = (funptr)(10,20,add);
	printf("%d\n", retu);
}

int mul(int var1, int var2 ,int (*funptr)(int, int))
{
	int retu = 0;
	retu = (funptr)(10,20);
	printf("%d\n", retu);
	return var1 * var2;
}

int add(int var1, int var2 )
{
	return var1 +var2;
}


