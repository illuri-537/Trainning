#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>


int main(void)
{
	mqd_t mqd;
	int status;


	mqd = mq_open("/mallareddy1", O_CREAT | O_WRONLY, 0777, NULL );
	if (mqd == -1) {

		perror("mq_open");
		exit(0);
	}
//	status = mq_send(mqd, "haikwdk", 8, 10);
	status = mq_send(mqd, "haikwdkljfdhfk", 20, 20);
//	status = mq_send(mqd, "haikwdkljmalklafdhfk", 20, 40);
//	status = mq_send(mqd, "haikwdkljfdhfdillik", 20, 30);
	printf("%d\n", status);
	mq_close(mqd);

	return 0;
}

