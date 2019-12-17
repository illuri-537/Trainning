#include <stdio.h>
#include <string.h>
#include  <stdlib.h>
#define MAX 50

char *rev_word(char *);
char *rev_string(char *);

int main(void)
{
	char *str;
	str = (char *)malloc(MAX*sizeof(char));
	fgets(str, MAX, stdin);
	__fpurge(stdin);
	rev_word(str);
	return 0;
}
char *rev_word(char *str)
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
		printf("%s\n", str);

		printf("%s\n", rev_string(str));
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

		









			
