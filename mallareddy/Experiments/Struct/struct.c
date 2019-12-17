#if 0
//		short b1;
//		short m;

//	short a;
char a[];
	short b;
//	short c;
//	char d;
//	char e;
	char f;
//	short g;
//	printf("%d\n",sizeof(s));
		printf("%p\n",&s.a);
		printf("%p\n",&s.b);
		printf("%p\n",&s.f);
		return 0;
	}
#endif
#if 0
#pragma pack(1)
struct format
{
	unsigned int gfc:4;
//	char i:3;
	unsigned int vpi:4;
	unsigned int vpi1:4;
	unsigned int vci:4;
	unsigned int vci2:8;

	unsigned int vci3:4;
	unsigned int pti:3;
	unsigned int clp:1;

	unsigned int hec:8;

//unsigned int vpi:4;
//	unsigned int gfc:4;



};
int main()
{
printf("%d",sizeof(struct format));
}
#endif

#if 0
int a=34;
int main()
{
	
	int b=30;
	{
		int c=a+b;
//		printf("%d\n",c);

	}
	printf("%d\n",c);
return 0;
}
#endif
#if 0
int main()
{
	
	 static const int ivar_a;	 
	 static volatile int ivar_b;
	 register const int ivar_c =10;		
	 register volatile int ivar_d=23;
ivar_d=20;
	 printf("%d",ivar_d);
}
#endif
#if 0
int main()
{
	int a=10;
//	int *q=&a;
	int **p=&a;
	
	printf("%d",**p);
	return 0;
}
#endif

#if 1
#include<stdio.h>
struct s
{

unsigned		int a:2;
//	int b:5;
}x;
	 


int main()
{

x.a = -2;
	printf("%u\n",x.a);
}
#endif
