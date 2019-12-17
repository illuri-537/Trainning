#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	int pipefd1[2];
	int pipefd2[2];

	int status;
	//char c;
	char *str = NULL;
	char *str1 = NULL;
	char *str2 = NULL;
	char *str3 = NULL;
	pid_t childpid;
	pipe(pipefd1);
	pipe(pipefd2);

	str = (char *)malloc(20);
	str1 = (char *)malloc(20);
	str2 = (char *)malloc(20);
	str3 = (char *)malloc(20);


	printf ("Enter string\n");
	fgets (str, 20, stdin);
	
	printf ("Enter string\n");
	fgets (str1, 20, stdin);
	

	childpid = fork();

	if (childpid == -1) {
		
			perror("fork");

	} else if (childpid > 0) {
			
			printf("Parent process context\n");
//			wait(NULL);
			close(pipefd1[0]);
//			close(pipefd2[0]);
			close(pipefd2[1]);
			 write(pipefd1[1], str, 20);
			read(pipefd2[0],str3, 20);
			close(pipefd1[1]);
			close(pipefd2[0]);
			printf("parent read = %s\n", str3);
		
//			printf("status = %d\n", status);

	} else if (childpid == 0) {
			
			printf("Child process context\n");
			close(pipefd1[1]);
			close(pipefd2[0]);
//			close(pipefd1[0]);
			read(pipefd1[0], str2,20);
			write(pipefd2[1], str1, 20);
			close(pipefd1[0]);
			close(pipefd2[1]);
			printf("child read = %s\n",str2);

//			printf("status = %d\n", status);

	} else {
	
		
			perror("Failure\n");
	}

	return 0;
}
	




