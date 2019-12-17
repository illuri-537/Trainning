/* program for converting decimal to binary,octal,hexa*/
#include<stdio.h>
#include"header.h"
main()
{
int dec;
int base;
int rem; 
scanf("%d",&dec);
scanf("%d",&base);
if(base<9)
dec_oct(dec,base);
else
dec_hexa(dec,base);

}

