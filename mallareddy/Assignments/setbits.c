#include<stdio.h>
#include"header.h"
int main()
{
	int x;
	int y;
	int position;
	int nbits;
	int result;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&position);
	scanf("%d",&nbits);
	result=setbits(x,position,y,nbits);
	printf("%d",result);
}




