#include <stdio.h>
#if 0
#include<stdio.h>
int main()
	{
	int  *p;
		// int a[4]={23,12,34};
	const	int a=23;
		p=&a;
		//*p=98;
		printf("%p,%d,%d",p,*p,a);
	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		int a=45;
		int *p;
		int *b;
		b=&p;
		printf("%d",* b);
	}

#endif
#if 0
int main()
	{
		int a=8;
		int *p;
		p=&a;
		printf("%p  %d",p,*p);
	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		printf("pi=%+7.5f",78793.14159);
	}
#endif
#if 0
i#include<stdio.h>
int main()
	{
	//	int a[10]={3,4,8,10};
		int b=19;
//		register int c=1265;
		int *p;
	//	int *q;
		p=&b;
	//	q=&p;
//		p=&19;
//		p=&c;
		(*p)++;
		printf("%p %d ",p,*p);
	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		void *ptr;
		char string[] = "global edgesoft.com";
		ptr = &string;
		ptr += 6;	
			printf("%s",ptr);
		return 0;
	}

#endif
#if 0
#include<stdio.h>
int main()
	{
//		 int a = 5;
//	 int *ptr;
	 char *c;

	//	ptr = &a;
//		printf("%d",*ptr);

	//	*ptr = 10;
	//	printf("%d\n", a);
        printf("%d",sizeof(*c));
		return 0;
	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		char *ptr="t%d%t%s\n";
		while(*ptr!='t')printf("%c",*ptr);

		//printf("%c",*ptr);
		printf("t%s\n",ptr);
		return 0;
	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		int q[]={1,2,3,3,5,6,7,8};
		int *p;
		p=q;
		printf("%d     %d      ",*p++,++q[2]);
	}
#endif
#if 0
#include<stdio.h>
#define SIZE 10
int main()
	{
		char  arr[SIZE];
		size(arr);
		printf("%d",sizeof arr);
		return 0;
	}
void size(int  arr[SIZE])
	{
		printf("%d",sizeof(arr[SIZE]));
	}
#endif
#if 0
int main()
	{
		char str[]="GLobaledge";
		++str;	
		printf("%s\n",str);
		return 0;
	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		int a[]={0001,0010,0100,01000};
		int i;
		for(i=0;i<4;i++)
			printf("%d",a[i]);
		}
#endif
#if 0
#include<stdio.h>
int main()
	{
		char c='a';
		char *c_ptr=&c;
		printf("%d %d",sizeof(char),sizeof c_ptr);
	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		char *p;
		char buf[10]={1,2,3,4,5,6,9,8};
		p=(buf+3)[3];
		printf("%d",p);
	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		int a[2]={};
		printf("%d",1[a+4]);
	}
#endif
#if 0
#include<stdio.h>
int main()
{
int a[5]={1,3,3,5};
//a=a[3][-1];
printf("%d",a[3(-2)]);
}
#endif
#if 0
#include<stdio.h>
int main()
	{
		int i=256;
		char  *ptr=&i;
		//*ptr=2;
		printf("%d",*(ptr+1));
return 0;

	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		

		int a = 5,b = 10,c; 

		int *p = &a,*q = &b; 

		c = q-p; 

		printf("%d",c); 

		return 0; 

	}
#endif
#if 0
#include<stdio.h>
int main()
	{
		int n,i=1;
		scanf("%d",&n);
		while(i<=n)
			{
				printf("%d",i);
				i++;
			}
	}
#endif
#if 0
#include<stdio.h>
int main()
{
    printf("%d, %d\n", sizeof(2.2000000005555555555f), sizeof(1.0f));
	    return 0;
}
#endif
#if 0

void *b;
int main()
{

//	void a = NULL;
//	void* b;

	printf("%d\n",sizeof(void));
	printf("%d\n",sizeof(void));

	return 0;
}

#endif

#if 0

int main()
{

	char  *a;

	a = (char *) malloc(sizeof(char));

	printf("%d\n",a);

	return 0;

}
#endif
#if 0
int main(void)
{	
	int n = 10;
	int *ptr = &n;
	
	printf("%d\n", *ptr);
	ptr++;
	printf("%d\n", *ptr);
	return 0;
}
#endif
#if 0
int main(void)
{	
	int n = 65;
	//char *ptr = &n;
	char *ptr =&n;
	printf("%c\n", *ptr);
	ptr++;
	printf("%d\n", *ptr);
	return 0;
}
#endif

#if 0
int main(void)
{	
	int n = 10;
	int *ptr = &n;
	
	printf("%c", *ptr);
	return 0;

}
#endif

#if 0
int main(void)
{
	char arr[10] = "Globaledgek";
	int i = 0;
	
	for(i = 0; arr[i]!='\0';i++) 
		printf("%c\n",arr[i]);
	return 0;
}
#endif
#if 0
int main(void)
{
	char arr[10];
	int i = 0;
	printf("enter string\n");
	for (i = 0; arr[i]!='\n';i++)
		scanf("%c\n", &arr[i]);

//	printf("%s\n", arr);

	for (i = 0; arr[i]!='\n';i++);
		printf("%c\n", arr[i]);	
	return 0;
}
#endif

#if 0
int main(void)
{
	char arr[10];
	scanf("%s",arr);
	printf("%s\n",arr);
	return 0;
}
#endif

#if 0
int main(void)
{
	int arr[] = {12,13,14,15};
	printf("%d\n", arr);
	return 0;
}
#endif
#if 0
int main()
{
	int arr[]={1,2,3,4};
	int i = 0;
	printf("%d\n", sizeof(arr));
	int s=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", arr[s-1]);
	return 0;
}
#endif
#if 0
int main(void)
{
	int *ptr;
	ptr = (int *)malloc(sizeof(char)*10);
	strcpy(ptr,"mallaredyyidshdhhcbdsdh");
	*ptr = 'r';
	puts(ptr);
	return 0;
}
#endif

#if 0
int main(void)
{
	char str[10] = "global";
	char str1[20];
	strcpy(str1,str);
//	str1[3] = 'm';
	str1[20] = "edge";
	puts(str1);
	return 0;
}
#endif

#if 1
int main(void)
{
	char str[5] = "malla";
	char str1[3] = "red";
	printf("%s\n",str);
	printf("%s\n",str1);
	return 0;
}
#endif
