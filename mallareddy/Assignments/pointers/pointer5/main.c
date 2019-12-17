#include "header.h"
//int n;
int main()
{   
		char *str;
		char *str1;
		int n1;
		puts("enter n");
		scanf("%d",&n);
		puts("enter a string:");
		__fpurge(stdin);
		//      fgets(sbuf,n,stdin);
		str = (char *)malloc(n*sizeof(char));
		fgets(str,n,stdin);
		puts("enter string2:");
		__fpurge(stdin);

		str1 = (char *)malloc(n*sizeof(char));
		fgets(str1,n,stdin);
		puts("how many characters to append n1:\n");
		scanf("%d",&n1);

		sappend(str,str1);
		//printf("%s\n",(str,str1));
		puts(str);
		return 0;

}   


