#include "header.h"

int main()
{
	char *buf;
	char ch;
	int n;
	puts("enter n value");
	scanf("%d",&n);
	puts("enter a string");
	__fpurge(stdin);
//	fgets(buf,n,stdin);

	buf = (char *)malloc(n*sizeof(char));
	fgets(buf,n,stdin);
	__fpurge(stdin);
	puts("enter character ch");
	scanf("%c",&ch);
	printf("%s",chr_add_instr(buf,ch));
	return 0;
}


