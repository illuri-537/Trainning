char* chr_add_instr(char *buf,char ch)
{   
	int x = validate(buf);
	int i=0;
	if(x==0)
	{

		while(buf[i]!='\0')
		{
		printf("asfdasdf\n");
			if(buf[i]==ch)
				{
					printf("%c\n",buf[i]);
					return &buf[i];
				}	
				i++;
	}
 }
	else 
		puts("enter valid input");
}




