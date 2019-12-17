/* program for invert bits*/
#include<stdio.h>
#include"header.h"
int main()
{
	int number;
	int position;
	int nbits;
	unsigned int result;
	//int mask;
	scanf("%d",&number);
	scanf("%d",&position);
	scanf("%d",&nbits);
	result=invert(number,position,nbits);
	printf("%d",result);
	return 0;
}

