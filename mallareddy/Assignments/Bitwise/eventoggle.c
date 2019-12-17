/*program for toggle even bits*/
#include"header.h"
int main()
{
	char number[100];
	int n;
	printf("enter number:\n");
	fgets(number,100,stdin);
	n=atoi_convert(number);
    printf("%d",eventoggle(n));
	return 0;
}

