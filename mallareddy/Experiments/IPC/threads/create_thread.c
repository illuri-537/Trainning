#include <stdio.h>
#include <pthread.h>
#include <string.h>

int value = 20;
void *thread_fun(void *);

int main(void)
{
	int status;
	pthread_t th_id;

	status = pthread_create(&th_id, NULL, thread_fun, NULL);

	if (status != 0) {

		printf (" thread creation failued = %s\n", strerror(status));
	}

	getchar();
	printf ("%d\n", value);
	pthread_exit(0);
	return 0;
}

void *thread_fun(void *p)	
{
	value = value + 10;
	printf (" Thread Function \n");
	getchar();
	return NULL;
}
