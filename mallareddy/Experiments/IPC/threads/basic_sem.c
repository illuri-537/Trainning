#include <stdio.h> 
#include <pthread.h> 
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <stdlib.h> 
  
sem_t sem1 ;
sem_t sem2 ;
int global = 1;
  
void* thread_fun1(void *ptr) 
{ 
	//while (1) {
		
		sem_wait(&sem1); //it decrements the value to proceed//
		printf("after wait sem1 =%d\n",sem1);
		for (; global <= 20 ; global++)
			printf("global = %d\n",global);
	                printf("task is finished\n"); 

		sem_post(&sem2); //it increment the value for proceeding next thread//
		printf("after post sem2 = %d\n",sem2);
		pthread_exit(NULL);
	
	//}

} 

void* thread_fun2(void *ptr) 
{ 
	
	//while (1) {
		
		sem_wait(&sem2); //it decrements the value to proceed//
		printf("after wait sem2 =%d\n",sem2);

		printf("it is entering\n");
		for(global = 1; global <= 10; global++)
		printf("global = %d\n",global);
                printf("task is finished\n");

		sem_post(&sem1); //it increment the value for proceeding next thread//
		printf("after post sem1 = %d\n",sem1);
		pthread_exit(NULL);



}
   
 
int main(void) 
{ 
    pthread_t tid1; 
    pthread_t tid2;
    int catch1 = 0;
    int catch2 = 0;

    catch1 = sem_init(&sem1,0,0);// If value is greater than 1 then only decrement proceeds,if not it wait will blocks until the value is greaterthan zero//
    catch2 = sem_init(&sem2,0,1);// If value is greater than 1 then only decrement proceeds,if not it wait will blocks until the value is greaterthan zero//
    if (0 != catch2) {
	perror("catch");
	exit(EXIT_FAILURE);
    }
	
    pthread_create(&tid1, NULL, thread_fun1,NULL); 
    pthread_create(&tid2, NULL, thread_fun2,NULL);
    //sem_destroy(&sem1); 
    //sem_destroy(&sem2); 
    pthread_exit(NULL);
  
} 
