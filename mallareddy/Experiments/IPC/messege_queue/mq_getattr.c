#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <mqueue.h>




int main(void)
{
		struct mq_attr attr;

		mqd_t mqd = mq_open("/mallareddy",O_RDWR|O_CREAT,0660, &attr);
		if(mqd == -1) {
				perror("mq_open");
				return 1;
		}
		if (mq_getattr(mqd, &attr) == -1) {
				perror("mq_getattr");
				return 1;
		}

		printf("mq_flags %ld\n",  attr.mq_flags);
		printf("mq_maxmsg %ld\n", attr.mq_maxmsg);
		printf("mq_msgsize %ld\n",attr.mq_msgsize);
		printf("mq_curmsgs %ld\n",attr.mq_curmsgs);
		mq_close(mqd);
	//	mq_unlink("/mallareddy1");
		return 0;
}



