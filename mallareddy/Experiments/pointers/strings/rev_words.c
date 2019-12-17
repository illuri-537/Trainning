#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 30
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

	int var = 0;
	int length = 0;
	int var1 = 0;
	int var3 = 0;
	int length1 = 0;
	for (var = 0; *(str + var) != '\0'; var++) {
		length++;
	}
	printf("%d\n", length);
	for (var = 0; var < length; var ++) {
	    length1++;
		if (*(str + var) == ' ' || *(str + var) == '\n') {
				for (var1 = var+1-length1;var1 < (var-1); var1++,var--) { 
						*(str + var-1) ^= *(str + var1);
						*(str + var1) ^=  *(str + var - 1);
						*(str + var-1) ^= *(str + var1);
				}
				var = var1+3;
				length1 = 0;
		}
		
	}
	return str;
}

			
