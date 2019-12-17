#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>
#include <string.h>

int main(void)
{

	char buff[200];
	int p;
	mqd_t mqd;
	mqd = mq_open("/thread_queue_main", O_RDONLY);
	if (mqd == -1) {

		perror("mq_open");
		exit(0);
	}

	mq_receive(mqd, buff,8192, &p);
	printf("%s\n", buff);
	mq_receive(mqd, buff,8192, &p);
	printf("%s\n", buff);
	mq_close(mqd);
	return 0;
}


