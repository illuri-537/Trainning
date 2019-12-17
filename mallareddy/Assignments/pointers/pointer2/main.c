#include "header.h"

int main()
{
	char *sbuf;
	char *dbuf;
	int j;
	int n;
	puts("enter j");
	scanf("%d",&j);
	puts("enter a string");
	__fpurge(stdin);
	sbuf = (char *)malloc(j*sizeof(char));
	dbuf = (char *)malloc(j*sizeof(char));
	fgets(sbuf,j,stdin);
	__fpurge(stdin);
	puts("enter how many characters to copy:\n");
	scanf("%d",&n);
//	__fpurge(stdin);
//	dbuf = (char *)malloc(j*sizeof(char));
printf("%s",dbuf);
	dbuf = strncp(dbuf,sbuf,n);
	puts(dbuf);
	return 0;
}
