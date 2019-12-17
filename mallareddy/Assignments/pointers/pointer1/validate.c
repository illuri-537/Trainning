// validation function for the given string
int validate(char *sbuf)
{
	int i=0;
	int valid=0;
	while((sbuf[i])!='\0')
		{
			if((sbuf[i])>=32 && (sbuf[i]<=126))
				{
					valid = 0;
				}
			else {
				valid = 1;
				break;
				}
				i++;
		}
		return valid;
}


				

