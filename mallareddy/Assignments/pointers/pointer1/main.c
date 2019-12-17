/**
* @file                                     
* @author Mallareddy   
*/
#include "header.h"
/**
* @brief Macro is defined  named as SIZE
 */
#define MAX 100





int main()
	{
		char *sbuf;
		char *dbuf;
		int number;
	//	puts("enter n");
	//	scanf("%d",&n);
		puts("enter a string:");
		__fpurge(stdin);
//		fgets(sbuf,n,stdin);
		sbuf=(char *)malloc(n*sizeof(char));
		fgets(sbuf,n,stdin);
		dbuf=(char *)malloc(n*sizeof(char));
//		__fpurge(stdout);

	    dbuf	=strcp(dbuf,sbuf);

		puts(dbuf);
		return 0;
	
	}





