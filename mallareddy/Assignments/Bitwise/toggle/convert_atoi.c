int atoi_convert(char number[100])
	{
    	int res=0,i=0;
        while(number[i]>='0' && number[i]<='9')
			{
	        	 res=res*10+number[i]-'0';
	             i++;
			}
		return res;
	}

