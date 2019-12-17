#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
#include <mqueue.h>
#include <fcntl.h>
#include <sys/stat.h>

void *thread_fun1(void);

int main(void)
{
	int status = 0;

	pthread_t th_id1;

	FILE *file_pointer;
	char *buff1;
	struct mq_getattr attr;
	mqd_t mqd;
	buff1 = (char *)malloc(100);


	file_pointer = fopen("malla.txt", "r");

	mqd = mq_open("/thread_queue_main", O_CREAT | O_WRONLY, 0777, NULL);

	if (mqd == -1) {
		
		perror("mq_open");
	}

	if (file_pointer == NULL) {

		perror("Error opening file\n");
	}
	while (fgetc(file_pointer) != EOF){
		
		fseek(file_pointer, -1, SEEK_CUR);
		fgets(buff1, 100, file_pointer);
		mq_send(mqd, buff1, 100, 0);
	
	}

	status = pthread_create(&th_id1, NULL, (void *)thread_fun1, NULL);

	if (status != 0) {

		printf (" thread creation failued = %s\n", strerror(status));
	}

	pthread_exit(NULL);
}




void *thread_fun1(void)	
{	

	char *buff1;
	mqd_t mqd;
	int p;
	buff1 = (char *)malloc(100);	


	mqd = mq_open("/thread_queue_main", O_CREAT | O_RDONLY, 0777, NULL);

	if (mqd == -1) {
		
		perror("mq_open");
	}
	
		mq_receive(mqd, buff1, , &p);

		printf("%s\n", buff1);

}
