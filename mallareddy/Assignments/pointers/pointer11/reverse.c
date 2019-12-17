#include "header.h"
char reverse(char *str,char *rev)
{
	int i;
	int len;
	int x;
	int j;
	x = validate(str,rev);
	printf("%d",x);
	if(x == 0){
	while(*(str+i)!= '\0'){
			
			i++;
	}
	printf("%d",i);
	len = i;
	j = 0;
	i = len-1;
//	printf("%d\n",len);
	while (i>=0){
		
		*(rev+j) = *(str+i);
		i--;
		j++;
//printf("%d\n",*(rev+i));
	}
//	printf("%d\n",rev[j]);
	
	rev[j] = '\0';
	}
	else 
//		puts("invalid");
return *(rev+j);
}
