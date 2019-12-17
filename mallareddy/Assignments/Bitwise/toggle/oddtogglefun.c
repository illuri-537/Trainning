int oddtoggle(int number)
{
	int i=1,temp=0;
	      while(i<32)
	             {
		              temp=(number>>i)&1;         //temp=number&1;
		     		  if(temp==1)
			    		 {
			     			temp=temp<<i;
				 			number=number^temp;
						 }
					  else
						 {
				 			temp=temp|1;
							temp=temp<<i;
						    number=number^temp;
						 }
						 i=i+2;
				 }
	 return number;
 }

