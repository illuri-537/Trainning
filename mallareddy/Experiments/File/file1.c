#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	FILE *file_pointer;
	char ch;
	char *buff;
	int i = 0;
	int num = 0;
	buff = (char *)malloc(200);

	file_pointer = fopen("space.txt", "r");
	if (NULL == file_pointer) {
		
		perror("Error opening file");
	} else {

	  while ((ch = fgetc(file_pointer)) != EOF) 

	       buff[i++] = ch;
		   for (i=0;buff[i] != '\0';i++) {
		       if (buff[i] == '\n') {
			      for (num = i; buff[num] != '\0'; num++) {
				  	  buff[num] = buff[num+1];
			   	  }
	          }  

	       } 

	  } 
	       printf("%s\n", buff);
	 
	 return 0;
}


