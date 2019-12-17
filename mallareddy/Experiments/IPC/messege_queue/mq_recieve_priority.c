#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>
#include <string.h>

int main(void)
{

	struct mq_attr *attr;
	FILE *file_pointer;
	char *buff;
	mqd_t mqd;
	int var = 0;
	int priority;
	buff = (char *)malloc(200);
	attr = (struct mq_attr *)malloc(sizeof(struct mq_attr));	
	file_pointer = fopen("priority.txt", "a+");


	mqd = mq_open("/mallareddy", O_RDONLY);
	if (mqd == -1) {

		perror("mq_open");
		exit(0);
	}
	mq_getattr(mqd, attr);
	for (var = 0; var < 3; var++) {
	mq_receive (mqd, buff, attr->mq_msgsize, &priority);
	fprintf(file_pointer, "%s", buff);
	//printf("%s\n", buff);
	}
	mq_close(mqd);

	return 0;
}

