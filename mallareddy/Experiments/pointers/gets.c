#include <stdio.h>
#define MAX 10

int main(void)
{
	 char str[MAX] = {0};
	 char *ptr = NULL;
	 printf("enter string\n");
	 ptr = fgets(str,MAX,stdin);
	 if (NULL == ptr) {
	 	perror("fgets");
		return 0;
	} else {
	        printf("%s\n", str);
			return 0;
	  }
}

