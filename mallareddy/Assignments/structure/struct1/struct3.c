// program to find endianees of a machine

#include <stdio.h>

int main ()
{
		unsigned int x = 0x76543220;
		char *c = (char*) &x;

		printf ("*c is: 0x%x\n", *c);
		if (*c == 0x20)
		{
				printf ("machine  architecture is little endian. \n");
		}
		else
		{
				printf ("machine  architecture is big endian. \n");
		}

		return 0;
}
