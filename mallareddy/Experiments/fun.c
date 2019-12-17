#if 0
#include <stdio.h>
int main(void)
{
	int arr[] = {1, 2 , 3, 4, 5};
	int *ptr = NULL;
	ptr = arr++;
	//ptr=ptr++;

//	printf("%p\n",arr+1);
//	printf("%d\n",*arr);

		
	printf("%p\n", ptr);
//	ptr = ptr;
	printf("%d\n", *ptr);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	 return 0;
}
#endif

#if 1
#include <stdio.h>
int a = 10;
int main(void)
{
	int a = 20;
	{
		extern int a;
	

	printf("%d\n", a);
}

}
#endif
