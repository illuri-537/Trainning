#include <stdio.h>
#include <string.h>

int main () {
		const char src[50] = "global edge softwarelimited";
		char dest[50];
		strcpy(dest,"Heloooo!!");
		printf("Before memcpy dest = %s\n", dest);
		strncpy(dest, src, strlen(src)+1);

		printf("Before memcpy dest = %s\n", dest);
		memcpy(dest, src, strlen(src)+1);
		printf("After memcpy dest = %s\n", dest);

		return(0);
}
