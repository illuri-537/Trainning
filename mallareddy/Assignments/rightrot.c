#include<stdio.h>
#include"header.h"
int main()
{
int x;
int nbits;
int result;
scanf("%d",&x);
scanf("%d",&nbits);
result=rightrot(x,nbits);
printf("%d",result);
}


