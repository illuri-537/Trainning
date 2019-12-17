#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

int var = -1;
pthread_mutex_t mut1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mut2= PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mut3 = PTHREAD_MUTEX_INITIALIZER;
void *thread_increment(void)
{
	pthread_mutex_lock(&mut1);
	var++;
	pthread_mutex_unlock(&mut2);
}
void *thread_even(void)
{
	pthread_mutex_lock(&mut2);
	if ( 0 == var % 2) {
		printf (" even thread: %d\n", var);
		pthread_mutex_unlock(&mut1);
	} else {
		
			printf("odd\n");
	}

	pthread_mutex_unlock(&mut3);


}
void *thread_odd(void)
{
	
	pthread_mutex_lock(&mut3);
	if  (1 == var % 2) {
		printf (" odd thread: %d\n", var);
	} else {	
		
		printf("even\n");
	}
	pthread_mutex_unlock(&mut1);
}



int main(void)
{
	int status =0;

	pthread_t th_id;
	pthread_t th_id1;
	pthread_t th_id2;

	status = pthread_create(&th_id, NULL, (void *)thread_increment, NULL);
		if (0 != status) {
			
				printf (" thread creation failed = %s\n", strerror(status));
		}
		
	status = pthread_create(&th_id1, NULL, (void *)thread_even, NULL);				if (0 != status) {
			
				printf (" thread creation failed = %s\n", strerror(status));
		}

	status = pthread_create(&th_id2, NULL, (void *)thread_odd, NULL);
		if (0 != status) {
			
				printf (" thread creation failed = %s\n", strerror(status));
		}

	pthread_exit(NULL);
}




