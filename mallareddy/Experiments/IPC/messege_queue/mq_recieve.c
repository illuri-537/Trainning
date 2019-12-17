#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>
#include <string.h>

int main(void)
{
	char buff[80];
	mqd_t mqd;
	int p;
	


	mqd = mq_open("/mallareddy1", O_RDONLY);
	if (mqd == -1) {

		perror("mq_open");
		exit(0);
	}
	mq_receive (mqd, buff, 5, &p);
	printf("%s\n", buff);
	mq_close(mqd);

	return 0;
}

