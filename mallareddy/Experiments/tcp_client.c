#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#define MAX 200

int main(void)
{

	int sock_fd;
	int connect_fd;
	char buff[MAX];
	struct sockaddr addr;
//	socklen_t addrlen;
	sock_fd = socket(AF_INET, SOCK_STREAM, 0);

	if ( -1 == sock_fd) {
		perror("socket");
	}
	addr.sin_family = AF_INET;
	addr.sin_port = 50000;
	addr.sin_addr.s_addr = INADDR_ANY;

	  bind(sock_fd, &addr, sizeof(addr)); 
	  listen (sock_fd, 2);

	fgets(buff, MAX, stdin);
	write(sock_fd, buff, MAX); 
}


