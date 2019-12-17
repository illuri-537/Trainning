#include<stdio.h>



#if 0

/* simple example for pointer usage */

int main(void)

{

		int a = 65;

		int *ptr;
		int i;

		int arr[5] = {0};
		for (i = 0; i < 9; i++) {
				

				arr[i] = 10;
				printf("%d\n",arr[i]);
		}

/*
		ptr = &a;

		printf("*ptr = %c\n",*ptr);

		printf("*ptr = %d\n",*ptr);

		printf("*ptr = %f\n",(float )*ptr);

		printf("*ptr = %p",(void *)*ptr);	
		printf("*ptr = %s\n",*ptr);

printf("hg\n");		//struct temp num;
		printf("*ptr = %x\n",ptr);

*/
		return 0;

}
#endif
#if 0
int main(void)

{

		int a ={1,2,3,4};

		int *ptr = NULL;
		


		ptr = &a;

		printf("&ac = %c\n",a);
		printf("ptr = %d\n",a);
		printf("ptr = %s\n",a);
/*
		printf("&a = %c\n",a);
		printf("ptr = %d\n",ptr);

		printf("ptr = %f\n",ptr);
		printf("ptr = %d\n",a);

		printf("a = %p\n",a);
		printf("a = %x\n",a);

//		printf("ptr = %p\n",ptr>>2);	

		printf("ptr = %x\n",(unsigned int)ptr);

		printf("ptr = %c\n",*ptr);

*/

		return 0;

}
#endif
#if 0

int main(void)
{
	int *p;
	int a =13;
	p = &a;
	int *p1;
	int b = 12;
	p1 = &b;

	printf("%p\n",p);
	printf("%p\n",p1);
	printf("%d\n",*p);
	printf("%d\n", p1-p);
	
	printf("%p\n", (int)p1 + (int)p);
	return 0;
}
#endif

/* dereferencing a dangling pointer */
#if 0
int main(void)

{

		int *ptr;



		printf("*ptr = %c\n",ptr);

		printf("*ptr = %d\n",ptr);

		printf("*ptr = %f\n",ptr);

		printf("*ptr = %p\n",ptr);	

		printf("*ptr = %x\n",ptr);

		printf("*ptr = %s\n",ptr);

		return 0;

}

/* every time it prints the same garbage value, but different float values 

   and seg fault for %s */

#endif
#if 0
int main(void)

{

		int *ptr = NULL;

		printf("ptr = %c\n",*ptr);
		printf("ptr = %d\n",*ptr);
		printf("ptr = %f\n",ptr);
		printf("ptr = %p\n",ptr);	
		printf("ptr = %x\n",ptr);
		printf("ptr = %s\n",ptr);

		return 0;

}
#endif
#if 0
int main(void)

{

		char a = 65;
		char b = 70;
		char c = 97;
	//	char *ctr=&a;
		int *ptr = NULL;
	//	void *p;
	//	p=(void *)ctr;
	//	ptr=(int *)p;
		//char *ctr=(char*)ptr;
		int d =  ((int)a);
		ptr =(int *)&d;

//		printf("*cptr = %d\n",*ctr);
		printf("*ptr = %d\n",*ptr);
		printf("ptr = %p\n",ptr);
		printf("&a = %p\n",&a);
		printf("a = %d\n",a);
	//	printf("*ptr = %s\n",ptr);

		return 0;

}
#endif

#if 0
int main(void)
{
		int *ptr;
		printf("*ptr = %c\n",*ptr);
		printf("*ptr = %d\n",*ptr);
		printf("*ptr = %f\n",*ptr);
		printf("*ptr = %p\n",*ptr);	
		printf("*ptr = %x\n",*ptr);
		printf("*ptr = %s\n",*ptr);
		return 0;

}
#endif

#if 0
int main(void)

{

		char a = 65;
		char b = 70;
//		char d = 0;
		char c = 97;
		char *ptr = NULL;
		ptr = &a;
		printf("*ptr = %c\n",*ptr);
		printf("*ptr = %s\n",ptr);
		return 0;

}
#endif
#if 0

int main(void)

{

		int a = 0x67653423;

		int b = 70;

		int c = 97;

		int *ptr = NULL;



		ptr = &a;

		printf("*ptr = %x\n",*ptr);
		printf("ptr = %p\n", ptr);

		printf("*ptr = %d\n",ptr);
		printf("*ptr = %s\n",ptr);
		int i;
		for(i=0;i<5;i++)
;//		printf("*ptr = %x\n",*ptr++);
		return 0;

}
#endif
#if 0
int main(void)

{

		char a;

		short int b;

		int c;

		long d;

		float e;

		double f;

		long double g;



		char *ptr1 = &a;

		short int *ptr2 = &b;

		int *ptr3 = &c;

		long *ptr4 = &d;

		float *ptr5 = &e;

		double *ptr6 = &f;

		long double *ptr7 = &g; 



		printf("ptr1 = %p , ptr1 + 1 = %p\n",ptr1,ptr1 + 1);

		printf("ptr2 = %p , ptr2 + 1 = %p\n",ptr2,ptr2 + 1);

		printf("ptr3 = %p , ptr3 + 1 = %p\n",ptr3,ptr3 + 1);

		printf("ptr4 = %p , ptr4 + 1 = %p\n",ptr4,ptr4 + 1);

		printf("ptr5 = %p , ptr5 + 1 = %p\n",ptr5,ptr5 + 1);

		printf("ptr6 = %p , ptr6 + 1 = %p\n",ptr6,ptr6 + 1);

		printf("ptr7 = %p , ptr7 + 1 = %p\n",ptr7,ptr7 + 1);

		return 0;

}
#endif

#if 0
int main(void)

{   

		char a;

		short int b;

		int c;

		long d;

		float e;

		double f;

		long double g;



		char *ptr1 = &a;

		short int *ptr2 = &b;

		int *ptr3 = &c;

		long *ptr4 = &d;

		float *ptr5 = &e;

		double *ptr6 = &f;

		long double *ptr7 = &g;



		printf("(ptr1 - (ptr1 + 1)) = %d\n",ptr1 - (ptr1));

		printf("(ptr2 - (ptr2 + 1)) = %d\n",ptr2 - (ptr2 - 1));

		printf("(ptr3 - (ptr3 + 1)) = %d\n",ptr3 - (ptr3 - 1));

		printf("(ptr4 - (ptr4 + 1)) = %d\n",ptr4 - (ptr4 - 1));

		printf("(ptr5 - (ptr5 + 1)) = %d\n",ptr5 - (ptr5 - 1));

		printf("(ptr6 - (ptr6 + 1)) = %d\n",ptr6 - (ptr6 - 1));

		printf("(ptr7 - (ptr7 + 1)) = %d\n",ptr7 + (ptr7 - 2));

		return 0;

}
#endif
#if 0
int main(void)

{

		int a = 10;

		int b = &a;

		int *ptr = NULL;

		printf ("&a = %p\n", &a);
		printf ("&b = %p\n", &b);

		ptr = &b;

		printf("**ptr = %p\n",**ptr);

		return 0;
}
#endif
#if 0
int main(void)
{
	int a =12;
	int b = 1;
	int c= 0;
	int sum = 0;
	c = a & b;
	a = a ^ b;
	b = c << 1;
	sum = a | b;
	printf ("%d\n", sum);
	return 0;
}
#endif
#if 0



int *ptr1 = NULL;

int main(void)

{
const int  a = 65;

		ptr1 = &a;

		printf("ptr1 = %d\n",ptr1);

		printf("*ptr1 = %d\n",*ptr1);



		*ptr1 = 70;

		printf("ptr1 = %d\n",ptr1);

		printf("*ptr1 = %d\n",*ptr1);



		return 0;

}
#endif

#if 1
int main(void)

{

		int const * const ptr = NULL;

		ptr = NULL;



		printf("ptr = %c\n",ptr);

		printf("ptr = %d\n",ptr);

		printf("ptr = %f\n",ptr);

		printf("ptr = %p\n",ptr);

		printf("ptr = %x\n",ptr);

		printf("ptr = %s\n",ptr);

		return 0;

}


#endif
