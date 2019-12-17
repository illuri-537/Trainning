int validate(char *str,char *rev)
{
		int i=0;
		int valid=0;
		while((*(str+i))!='\n')
		{   
				if(*(str+i)>=32 && *(str+i)<126)
				{
						valid=0;
				}
				else {
						valid = 1;
						break;
				}
				i++;
		}   
		return valid;
}

