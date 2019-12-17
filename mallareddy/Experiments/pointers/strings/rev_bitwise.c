#include <stdio.h>
#include <string.h>
#define MAX 100
char *rev_string(char *);

int main(void)
{
	char *str;
	str = (char *)malloc(MAX*sizeof(char));
	fgets(str, MAX, stdin);

	printf("%s\n",rev_string(str));
	return 0;
}

char *rev_string(char *str)
{

	int var = 0;
	int length = 0;
	for ( var = 0; *(str + var) != '\0'; var ++) {
		
			length++;
	}
	for (var = 0; var < length/2; var++) {

			*(str + var) = *(str + var) ^ *(str + length - var -1);
			*(str + length - var -1) = *(str + var) ^ *(str + length - var -1);
			*(str + var) = *(str + var) ^ *(str + length -var -1);
	}

	return str;
}

			
