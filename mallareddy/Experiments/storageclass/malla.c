#include<stdio.h>
#if 0 
/*const int a =10;
const int a1;
extern int d=40;
static int e;
static const int f=60;
static const int f1;
static const  int g = 70;
*/
int main(void)
{

int h=80;
const int i=90;
volatile int j=100;
static  int l = 60;
volatile const int k =110;
//const  int l =120;
printf("%d %d %d %d %d ", h, i, j, k, l);
}
#endif

#if 0
int main(void)
{

const int a = 100;
int *b = &a; 
*b = 101;
printf ("%d\n", *b);
}
#endif

#if 1
 volatile const  int  a = 10;
int main(void)
{
	printf("%d\n", a);
	return 0;
}
#endif

