#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	FILE *file_pointer;
	FILE *fp1;
	char ch;
	char *buff;
	int i = 0;
	int num = 0;
	int flag = 0;

	buff = (char *)malloc(200);

	file_pointer = fopen("space.txt", "r");
	fp1 = fopen("space1.txt", "w");
	if (NULL == fp1) {
		perror("Error opening file");
		}
	if (NULL == file_pointer) {
		
		
		perror("Error opening file");
	} else {

	  while ((ch = fgetc(file_pointer)) != EOF) {
	  	fseek(file_pointer, -1 , SEEK_CUR);

	  		if ((ch = fgetc(file_pointer)) != '\n') {
				fseek(file_pointer, -1, SEEK_CUR);
				fgets(buff, 200, file_pointer);
				for ( i =0; buff[i] != '\n'; i++) {

					if (buff[i] == '\n') {

						flag = 1;
					} else {
						flag = 0;
						break;
					}
				} 
				if (flag == 0)
				fprintf(fp1, "%s", buff);
			   	  }
	          }  

	       } 

	  
	 
	 return 0;
}


