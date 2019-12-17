#include <stdio.h>

#define bit_set(num, pos) ((1 << pos) | num)

int main(void)
{

	int num = 3;
	int pos = 2;

	printf("%d\n",bit_set(num, pos));
	return 0;
}
