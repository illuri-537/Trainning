#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
char *stringtok(char *, char *);
int main(void) 
{

	char *str;
	char *delim;

	str = (char *)malloc(MAX*sizeof(char));
	fgets(str, MAX, stdin);

	delim = (char *)malloc(MAX*sizeof(char));
	fgets(delim, MAX, stdin);

	printf("%s\n", stringtok(str, delim));

	return 0;
}

char *stringtok( char *str, char *delim)
{

	int var = 0;
	int var1 = 0;
	char *buff;
	int k =0;
	buff = (char *)malloc(MAX*sizeof(char));

	for (var = 0; *(str + var) != '\0'; var++) {

		if (*(str + var) != *(delim + k)) {

				*(buff + var1) = *(str + var);
				var1++;

		
		}
		
	}
	var1 = 0;
	for (var = 0; *(buff + var) != '\0'; var++) {
		if (*(buff + var) != *(delim+ k + 1)) {
			
				*(buff + var1) = *(buff + var);
				var1++;
			}
	}

	return buff;
}


	
