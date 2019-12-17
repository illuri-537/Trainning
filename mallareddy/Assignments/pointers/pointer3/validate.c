int validate(char *buf )
{
	int i=0;
	int valid=0;
	while((buf[i]!='\n'))
	{
		if(buf[i]>=32 && buf[i]<126)
		{
			valid =0;
		}
		else {
				valid =1;
				break;
			}
			i++;
		}
	return valid;
}

