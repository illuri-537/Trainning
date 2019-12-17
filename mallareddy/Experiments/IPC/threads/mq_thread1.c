#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
#include <mqueue.h>
#include <fcntl.h>
#include <sys/stat.h>

void *thread_fun(void);
void *thread_fun1(void);
void *thread_fun2(void);
void *thread_fun3(void);

int main(void)
{
	int status = 0;
	int status1 = 0;

	pthread_t th_id;
	pthread_t th_id1;
	pthread_t th_id2;
	pthread_t th_id3;


	status = pthread_create(&th_id, NULL, (void *)thread_fun, NULL);
	pthread_join(th_id, NULL);
	if ( status != 0) {

		printf (" thread creation failued = %s\n", strerror(status));
	}

	status1 = pthread_create(&th_id1, NULL, (void *)thread_fun1, NULL);
	pthread_join(th_id1, NULL);

	if (status1 != 0) {

		printf (" thread creation failued = %s\n", strerror(status));
	}
	status1 = pthread_create(&th_id2, NULL, (void *)thread_fun2, NULL);
	pthread_join(th_id2, NULL);

	if (status1 != 0) {

		printf (" thread creation failued = %s\n", strerror(status));
	}
	status1 = pthread_create(&th_id3, NULL, (void *)thread_fun3, NULL);
	pthread_join(th_id3, NULL);

	if (status1 != 0) {

		printf (" thread creation failued = %s\n", strerror(status));
	}
	pthread_exit(NULL);
	return 0;
}

void *thread_fun(void)	
{	

	FILE *file_pointer;
//	char *buff;
	char *buff1;
	mqd_t mqd;
//	buff = (char *)malloc(200);	
	buff1 = (char *)malloc(200);
	file_pointer = fopen("txt.txt", "r");

	mqd = mq_open("/thread_queue2", O_CREAT | O_WRONLY, 0777, NULL);

	if (mqd == -1) {
		
		perror("mq_open");
	}

	if (file_pointer == NULL) {

		perror("Error opening file\n");
	}
	while (fgetc(file_pointer) != EOF){
		
		fseek(file_pointer, -1, SEEK_CUR);
		fgets(buff1, 200, file_pointer);
		mq_send(mqd, buff1, 200, 10);
	
	}

}



void *thread_fun1(void)	
{	

	char *buff1;
	mqd_t mqd;
	int p;
	buff1 = (char *)malloc(200);	


	mqd = mq_open("/thread_queue2", O_CREAT | O_RDONLY, 0777, NULL);

	if (mqd == -1) {
		
		perror("mq_open");
	}


	
		mq_receive(mqd, buff1, 8192, &p);

		printf("%s\n", buff1);
		exit(0);

}
void *thread_fun2(void)	
{	

	char *buff1;
	mqd_t mqd;
	int p;
	buff1 = (char *)malloc(200);	

	mqd = mq_open("/thread_queue2", O_CREAT | O_RDONLY, 0777, NULL);

	if (mqd == -1) {
		
		perror("mq_open");
	}

		mq_receive(mqd, buff1, 8192, &p);
		printf("%s\n", buff1);
}

void *thread_fun3(void)	
{	

	char *buff1;
	mqd_t mqd;
	int p;
	buff1 = (char *)malloc(200);	

	mqd = mq_open("/thread_queue2", O_CREAT | O_RDONLY, 0777, NULL);

	if (mqd == -1) {
		
		perror("mq_open");
	}

	
		mq_receive(mqd, buff1, 8192, &p);

		printf("%s\n", buff1);
}
