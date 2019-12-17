#include"header.h"
char *sappend(char *str,char *str1)
{
		int x = validate(str,str1);
		int i=0;
		int j=0;
		char *s;
		s=(char*)realloc(str,2*n*sizeof(char));
		if(x==0)
		{   
				while(*(str+i)!='\0') 
			
				{   
					
						i++;
						
				}
				i--;


				while(*(str1+j)!='\0')
				{
					*(s+i+j)=*(str1+j);
				
					j++;
					
				}
				
		}   
		else 
				puts("enter valid input");
		return s;
		
}

