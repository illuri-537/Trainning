 int strcp(char *dbuf,char *sbuf)
{
int x = validate(sbuf);
	int i=0;
	if(x==0)
	{
	while((sbuf[i])!='\0')
	{

		dbuf[i] = sbuf[i];
		i++;

	}
	}
	else 
		puts("enter valid input");
	return dbuf;
//	validate(sbuf);
}


