#include <stdio.h>

static int var;
static int var = 12;
static int var;

int main(void)
{
	int	var = 45;
	static int var;
	printf ("%d\n", var);
	return 0;
}

