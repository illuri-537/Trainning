int strncp(char *dbuf,char *sbuf, int n)
{
		int x = validate(sbuf);
		int i=0;
		if(x==0)
		{   
				while((sbuf[i])!='\0')
				{   
				
					if(i<n)
					{

						dbuf[i] = sbuf[i];
						
					}
						i++;
		

				}
				dbuf[i+1]='\0';
		}   
		else 
				puts("enter valid input");
		return dbuf;
		//  validate(sbuf);
}

