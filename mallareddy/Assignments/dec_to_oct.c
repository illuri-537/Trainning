int dec_oct(dec,base)
{
    int rem;
	    rem=dec%base;
		    if(dec==0)
			        return;
					    dec_oct(dec/base,base);
							        printf("%d", rem);
									}
