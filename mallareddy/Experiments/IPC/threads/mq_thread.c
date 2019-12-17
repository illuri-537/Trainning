#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
#include <mqueue.h>
#include <fcntl.h>
#include <sys/stat.h>

void *thread_fun(void);

int main(void)
{
	int status;
	pthread_t th_id;

	status = pthread_create(&th_id, NULL, (void *)thread_fun, NULL);

	if (status != 0) {

		printf (" thread creation failued = %s\n", strerror(status));
	}

	pthread_exit(NULL);
	return 0;
}

void *thread_fun(void)	
{	

	FILE *file_pointer;
	char *buff;
	char *buff1;
	mqd_t mqd;
	buff = (char *)malloc(200);	
	buff1 = (char *)malloc(200);
	file_pointer = fopen("file.txt", "r");

	mqd = mq_open("/thread_queue", O_CREAT | O_WRONLY, 0777, NULL);

	if (mqd == -1) {
		
		perror("mq_open");
	}

	if (file_pointer == NULL) {

		perror("Error opening file");
	}
	while (fgetc(file_pointer) != EOF){
		
		fseek(file_pointer, -1, SEEK_CUR);
		fgets(buff, 200, file_pointer);
		sscanf(buff1, "%s", buff);
		mq_send(mqd, buff, 200, 10);
	
	 }


	printf (" Thread Function \n");
	getchar();
	return NULL;
}
