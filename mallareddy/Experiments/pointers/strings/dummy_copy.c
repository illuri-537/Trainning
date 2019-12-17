#include <stdio.h>
#include <string.h>
#include  <stdlib.h>
#define MAX 50

char *rev_string(char *);

int main(void)
{
	char *str;
	str = (char *)malloc(MAX*sizeof(char));
	fgets(str, MAX, stdin);
	__fpurge(stdin);
	printf("%s\n",rev_string(str));
	return 0;
}

char *rev_string(char *str)
{

	int start = 0;
	int end = 0;
	int num = 0;
	char ch = 0;
  	for (num = 0; *(str+num) != '\0'; num++) {
		 if ( (*(str+num) == ' ') || (*(str+num) == '\n')) {
			for (end = num-1; start < end; start++,end--) {
				 ch = *(str+end);
				 *(str+end) = *(str+start);
				 *(str+start) = ch;
		   }
		 start = num + 1;
		 }

	}
	return str;
}

		









			
