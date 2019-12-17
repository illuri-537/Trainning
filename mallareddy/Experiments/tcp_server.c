#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <netinet/in.h>
#define MAX 200

int main(void)
{

	int sock_fd;
	int acc_fd;
	char buff[MAX];
	struct sockaddr_in saddr;
	struct sockaddr_in caddr;
	socklen_t addr_size;
	sock_fd = socket(AF_INET, SOCK_STREAM, 0);

	if ( -1 == sock_fd) {
		perror("socket");
	}
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(60000);
	saddr.sin_addr.s_addr = INADDR_ANY;

	 if (bind(sock_fd, (struct sockaddr *)&saddr, sizeof(struct sockaddr_in)) == -1) {
	 		perror("bind");
		}

	  if (listen(sock_fd, 2) == -1) {
	  	perror("listen");
		}
	  

	  addr_size = sizeof(struct sockaddr_in);

	  acc_fd = accept(sock_fd, (struct sockaddr *)&caddr, &addr_size);
	  if ( -1 == acc_fd) {

	  	perror("accept");
	  }

//	fgets(buff, MAX, stdin);
while(1) {	
	read(acc_fd, buff, MAX); 
	printf("%s\n", buff);
	}
//	close(acc_fd);

}


