#include"header.h"
/*void validate_str(char *str)
{
    int i=0,flag=0;
    while(*(str+i+1)!='\0')
    {
        flag=0;
        if(*(str+i)>=32 && *(str+i)<=125 && *(str+i)!='^')
            flag=1;
        else break;
        i++;
    }
    if(flag==0){
        printf("\nPlease,Enter a valid String : ");
        input_str(str);
    }


}*/
int validate(char s[])
{
    int i,n,flag;
    n = 0;
    for (i = 0; s[i+1]!='\0' ; ++i)
    {
        flag=0;
        if(s[i] >= '0' && s[i] <= '9')
        {
            n = 10 * n + (s[i] - '0');
            flag=1;
        }
	    else if(s[0]==' ')
	    {
            flag=0;
            break;
	    }	
        else break;
    }
    if(flag==1 && s[i+1]=='\0')
        return n;
    else 
    {
        printf("\nPlease,Enter a valid Number : ");
        input();
    }
}
/*int to_lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}*/
