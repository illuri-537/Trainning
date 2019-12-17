/*program for swap the bits in a number*/
#include"header.h"
int main()
{
	char number[100];
	char number1[100];
	char ch;
	int n,n1,s,d;
	char source[10];//s is the source bit position
	char destination[10];//d is the destination bit position
	 printf("Enter the number:\n");
	 fgets(number,100,stdin);
	 n=atoi_convert(number);
	 printf("enter the dnumber:\n");
	 fgets(number1,100,stdin);
	 n1=atoi_convert(number1);
	 printf(" enter the source bit position:\n");
	 fgets(source,10,stdin);
	 s=atoi_convert(source);
	 printf("enter the destination bit position:\n");
	 fgets(destination,10,stdin);
	 d=atoi_convert(destination);

	while(1)
	{

		printf("enter choice 1.bitswap\n 2.diffbitswap\n:");
		scanf("%c",&ch); 
	     
			  switch(ch)
					   {
			           case1: bits_swap( number, s, d); 
					          printf("%d",bit_swap(n,s,d));
					          break;
					   case2: diffbit_swap(number, number1, s, d);
					          printf("%d",diffbit_swap(n,n1,s,d));
					          break;
					   default:
					          exit(0);
				      }
	}
	return 0;
}
