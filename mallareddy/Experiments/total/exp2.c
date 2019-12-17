
#include<stdio.h>
//for checking block of code is execution
#if 0
#include<stdio.h>
int main()
{

	add();
	return 0;
}

add()
	{
//	int var;
	{
	int var =20;
		printf("%d",var);
	}

}
#endif
//by using register keyword
#if 0
#include<stdio.h>
int main()
	{
		add();
		return 0;
	}

add()
	{
	register int var;
		{
			printf("%d",var);
		}
	}
#endif
#if 0
int main()
	{
	static int a=5;
	if(a--)
		{
		 main();
		 printf("%d\n",a);
		}
	return 0;
	}
#endif
#if 0
#include<math.h>
int main()
	{
	int n;
	scanf("%d",&n);
	 
	printf("%lf,%d\n",pow(2,n),++n);
	return 0;
	}
#endif
#if 0
int main()
	{
#endif
//#include<stdio.h>
#if 0
const int b=20;
char main()
	{
	const int a=10;
	int *b =&a;
	*b=13;
	printf("%d",a);
	return 0;
	}
#endif
#if 0

int main ()
{
	 unsigned int x = 0x76543210;
     char *c = (char*) &x;
	 
	  printf ("*c is: 0x%x\n", *c);
	  if (*c == 0x10)
		   {
		       printf ("Underlying architecture is little endian. \n");
		   }
	  else
		 {
			  printf ("Underlying architecture is big endian. \n");
		 }
							 
		  return 0;
}
#endif
#if 0
// const int a=30;
const int a=45;
char main()
	{
// int  a=45;
//extern	const int b;
//b=b+10;
	printf("%d",a);
	}
#endif
//syntax error
#if 0
char main()
	{
	int a=10
	printf("%d",a);
	}

#endif
//semantic error
#if 0
char main()
	{
	int s="hello";
	
	
	
	printf("%c",s);
	}
#endif
//linker error
#if 0

void main() // Here Main() should be main() 
{ 
    int a = 10; 
	    printf("%d", a);  
		} 
#endif
//semantic error
#if 0
void main() 
{ 
  int a, b, c; 
    a + b = c; //semantic error 
	} 
	#endif
// why we  can't use register as a function arguments
#if 0
int add(extern  int a, extern int b);

char main()
	{
	int a;
	int b;
	int sum;
scanf("%d",&a);
scanf("%d",&b);
 sum=add(a,b);
 printf("%d",sum);
 }
 int add(extern int a,extern int b)
 	{
	int sum;
	  sum= a+b;
	  return sum;
	 }
#endif
// register as global  variable
#if 0
register int a=19;
char main()
	{
	int a;
		printf("%d",a);
	}

	#endif
#if 0
char main()
	{

    	auto int x=8;        
	    printf("%d",x);  // here x is 8

		    { 
			       int x=3;
				   printf("%d",x);  // here x is 3
			}              

		printf("%d",x);  // here x is 8
	 }     
#endif
#if 0
#define var 5 
int main() 
	{ 
    	printf("%d ", var); 
	  
	    #ifdef var 
	    #undef var 
	    
		// redefine var as 10 
		#define var 10 
		#endif 
		  
		 printf("%d", var); 
		 return 0; 
 	}	` 

#endif
#if 0
char main()
	{
		 const int a;
		 a=10;
		 printf(" %d",a);
	}
#endif
#if 0
int main()
	{
		int i;
		for(i=31;i>=0;i--)
			{
				printf("hai");
//				break;
			}
			
	}
#endif
#if 0
/*hello*/
/*hello*/*what*/
int main()
	{
	return 0;
	}
#endif
//Q1: C program to undersand c89 comment
/* hello */ 
/* hello /*what */ */  

