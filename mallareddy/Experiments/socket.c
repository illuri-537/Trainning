/**
	*@file
	*@author mallareddy
	*@brief socket client program
	*@param sock_fd and connect_fd
*/



#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <netinet/in.h>
#define MAX 200

int main(void)
{

	int sock_fd;
	int connect_fd;
	char buff[20];
	struct sockaddr_in saddr;
//	struct sockaddr caddr;
//	socklen_t addrlen;
	sock_fd = socket(AF_INET, SOCK_STREAM, 0);

	if ( -1 == sock_fd) {
		perror("socket");
	}
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(60000);
	saddr.sin_addr.s_addr = INADDR_ANY;

	connect_fd = connect(sock_fd, (struct sockaddr *)&saddr, sizeof(struct sockaddr_in)); 

	if ( -1 == connect_fd) {
		perror("connect");
	}

while(1) {
	fgets(buff, MAX, stdin);
	write(sock_fd, buff, MAX); 
	}
}


