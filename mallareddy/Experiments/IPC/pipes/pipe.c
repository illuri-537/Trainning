#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	int fd[2];
	int status;
	int var = 1;
	char *str = NULL;
	char *str1 = NULL;
	pid_t childpid;
	pipe(fd);

	str = (char *)malloc(20);
	str1 = (char *)malloc(20);

	printf ("Enter string\n");
	fgets (str, 20, stdin);

	childpid = fork();

	if (childpid == -1) {
		
			perror("fork");

	} else if (childpid > 0) {
			
			printf("Parent process context\n");
			wait(NULL);
			close(fd[1]);
			status = read(fd[0], str1, 20);
			close(fd[0]);
			printf("string = %s\n", str1);
			printf("status = %d\n", status);

	} else if (childpid == 0) {
			
			printf("Child process context\n");
			while ( var > 0) {
			close(fd[0]);
		
			status = write(fd[1], str, 20);
			close(fd[1]);
			}
			printf("status = %d\n", status);

	} else {
	
		
			perror("Failure\n");
	}

	return 0;
}
	




