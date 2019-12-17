// program to initialize the  value to last  element in union

#include<stdio.h>

union sample
{
	int a:5;
	int b:10;
	int c:5;
	int d:21;
	int e;
};

int main()
{
	union sample u;  // sample class object  creation 

	u.e=20;  // intializing the value to the last element int the union

	printf("%d\n",u.a);
	printf("%d\n",u.b);
	printf("%d\n",u.c);
	printf("%d\n",u.d);
	return 0;

}








