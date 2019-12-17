#include "header.h"

int main()
{
	char *str;
	char *rev;
	char *str1;
	int n;
	puts("enter n:");
	scanf("%d",&n);
	puts("enter a string");
//	__fpurge(stdin);
	str = (char *)malloc(n*sizeof(char));
	fgets(str,n,stdin);
	__fpurge(stdin);
//	printf("mndfk");
	rev = (char *)malloc(n*sizeof(char));
	fgets(rev,n,stdin);
//	printf("mkadsak");
	str1 = reverse(str,rev);
	puts(str1);
	return 0;
}
