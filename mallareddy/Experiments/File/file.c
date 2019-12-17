#include<stdio.h>
#include<stdlib.h>
#if 0
int main()
{
	FILE *ptr;
	int fd;
	ptr = open("file.txt","O_RDONLY");
	fd=creat("abc.txt"," S_IRWXU" );
	lseek(1,3,SEEK_CUR);
	write(1,"malla\n",sizeof("malla"));
	close(ptr);
	return 0;
}
#endif
// creating a file and writing information in file
#if 0
#include<stdio.h>
#include<sys/stat.h>
int main()
{
	FILE *fp;
/*	char name[20];
	int age;
	int id;*/
	fp = open("student.txt","S_IRWXU");
/*	if(fp==NULL)
	{
		printf("file doesnot exist");
		return;
	}
    fprintf("enter name:");
	scanf("%s",name);
	fprintf(fp, "Name    = %s\n", name);
	fprintf("enter age:");
	scanf("%d",&age);
	fprintf(fp, "Age    = %d\n", age);
	fpritnf("enter id:");
	scanf("%d",&id);
	fprintf(fp, "id    = %d\n", id);*/
	fclose(fp);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main ()
{
		char name [20];
		int  length;
		FILE *fp;
		fp = fopen ("test.txt","r");
		fprintf (fp, "%s %d", “mallareddy”, 5);
		length = ftell(fp); 
		printf("%d\n",length);
		return 0;
}
#endif

#if 0
#include <stdio.h>

int main () {
		FILE *fp;
		int len;

		fp = fopen("test.txt", "w");
		if( fp == NULL )  {
				perror ("Error opening file");
				return(-1);
		}
		fseek(fp, 0, SEEK_END);
//		rewind(fp);

		len = ftell(fp);
//		fclose(fp);

		printf("Total size of test.txt = %d bytes\n", len);

		fclose(fp);

		return(0);
}
#endif

#if 0
#include<stdio.h>

int main() {
		
	FILE *fp;
	char ch;
//	int sum = 0;

	if (fp ==  NULL) {
		printf("error openinig file:\n");

		abort();
	}

	fp = fopen("malla","r");
//	fp = fopen("malla","r");
	while(1){
		sum = sum + fgetc(fp);
		ch = sum;
//		printf("%c\n",ch);
	if(ch == -1)
		break;
	//fputc(ch,fp);
	printf("%d",ch);
	}
	fclose(fp);
	return 0;
}
#endif
#if 0

#include <stdio.h>
int main()
{
		char buffer[100];
		// open file for both reading and writing
		FILE *f = fopen("rw.txt", "w");
		if (f)
		{
				fputs("something", f);
				// flush the stream so we can use fgets
				__fpurge(f);
				fgets(buffer, 9, f);
				fclose(f);
		}
		return 0;
}
#endif

#if 0

int main() 
{ 
		char str[20]; 
		int i; 
		for (i = 0; i<2; i++) 
{ 
				scanf("%[^\n]s", str); 
				printf("%s\n", str); 

				// used to clear the buffer 
				// and accept the next string 
				fflush(stdout); 
	} 
		return 0; 
}
#endif

#if 0

int main(void)
{

	FILE *fp;

	int num[100];

	int sum = 0;
	int i =0;

	fp = fopen("malla1","r");

	if(fp == NULL) {

		printf("file not opening\n");

		exit(0);
	}

	else
	{
		while(fscanf(fp,"%d",&num[i])!=EOF) {

			i++;
		}
	}

	for(i = 0;i<5;i++) {

		sum = sum + num[i];
	}

	printf("%d\n",sum);

	fclose(fp);
}
#endif

#if 0
int main(void)
{

	FILE *fp;

	int lines = 0;

	int spaces = 0;

	int tabs = 0;

	int characters = 0;

	char ch;

	fp = fopen("malla2","r");

	if(fp == NULL) {


		printf("opening file error\n");

		exit(0);

	}

	while(ch = getc(fp)!=EOF)
	{

		if(ch == ' ')

		{

			spaces++;

		}

		 if(ch == '\n')
		{

			lines++;

		}

		if(ch == '\t')
		{

			tabs++;

		}
		
		 
			characters++;

	}

	printf("%d\n",spaces);

	printf("%d\n",lines);

	printf("%d\n",tabs);

	printf("%d\n",characters);


	fclose(fp);

	return 0;
}
#endif


