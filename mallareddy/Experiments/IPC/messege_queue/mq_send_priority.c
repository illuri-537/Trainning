#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>
#include <string.h>

int main(void)
{
	FILE *file_pointer;
	char *buff;
	mqd_t mqd;
	int status;
	int var = 0;
	int priority = 0;
	buff = (char *)malloc(200);

	file_pointer = fopen("malla.txt", "r");
	if (NULL == file_pointer) {

		perror("Error opening file");
	}
	
	mqd = mq_open("/mallareddy", O_CREAT | O_WRONLY, 0777, NULL );
	if (-1 == mqd) {

		perror("mq_open");
		exit(0);
	}

	while (EOF != fgetc(file_pointer)) {
		
		fseek(file_pointer, -1, SEEK_CUR);
		fgets(buff, 200, file_pointer);
		status = mq_send(mqd, buff, strlen(buff)+1, priority++);

	}

	if (-1 == status) {

		perror("mq_send");
	}
	mq_close(mqd);

	return 0;
}

