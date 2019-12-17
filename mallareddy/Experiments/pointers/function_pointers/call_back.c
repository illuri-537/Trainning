#include <stdio.h>
void A();
void B(void (*fptr)());
int main(void)
{
	void (*fptr)() = A
	B(fptr);
}

void B(void (*fptr)())
{

	(*fptr)();
}

void A()
{
	printf("gg\n");
}
		





