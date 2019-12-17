#include<stdio.h>
#if 0
struct s
{
	int a;
	int b;
}d;

int c;
int m;
struct s1
{
int k;
int y;
{	

	int c;
	int m;
	}

}d1;

int main()
{
	d.k=34;
	d.y=65;
	d1.c=23;
	d1.m=43;
 printf("%d",d1.c);
 printf("%d",d1.m);
 printf("%d",d.a);
 printf("%d",d.b);
 return 0;
 }
#endif

#if 0

	struct space
	{
		int a;
		int b;
	};
	struct malla
	{
		int c;
		int k;
	}t;
	struct malla1
	{
		struct space  td;
		struct malla  sdt;
	}h;

int main()
{
	
	h.td.c=23;
	printf("%d",h.td.c);
	return 0;
}
#endif
#if 0

#include <stdio.h> 
 #pragma pack(1) 
  // A structure without forced alignment 
  struct test1 
  { 
     unsigned int x: 7; 
	    unsigned int y: 2; 
		}; 
		  
		  // A structure with forced alignment 
		  struct test2 
		  { 
		     unsigned int x: 5; 
			    unsigned int: 0; 
				   unsigned int y: 8; 
				   }; 
				     
					 int main() 
					 { 
					    printf("Size of test1 is %d bytes\n", sizeof(struct test1)); 
						   printf("Size of test2 is %d bytes\n", sizeof(struct test2)); 
						      return 0; 
							  }



#endif
#if 0
int main ()
{
	struct shell
	{
		int b;
		int c;
	};
	struct core
	{
		int i;
		int j;
	}q;
	struct part
	{
		struct shell p;
		struct core y;
	}z;
z.p.b=10;
z.y.i=98;
printf("%d\n %d\n",z.p.b,z.y.i);
}
#endif

#if 0
static int fun(int ,int);
int main()
{
	int sum;
 	 int a = 10;

 int b = 20;
	while(1%1){
		sum = fun(a,b);
		sum = fun(a,b);
	printf("%d\n",sum);
	}
//	printf("%d\n",sum);
	return 0;
}

static  int fun(  int a, int b){


	int sum;
	//sum = a + b;
	++a;
	++b;
	//fun(a,b);
	sum = a + b;
	return sum;

}
#endif

#if 0

extern  int  *b;

int main(void)
{
        printf("%d\n",*b);
		        return 0;
}

#endif

#if 1

int main(void)
{

	FILE *f;

	f = fopen("file","w");

}
#endif

