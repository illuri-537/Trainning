#include <stdio.h>

extern  int var;
int main()
{

	increment();
	increment();
	increment();


	return 0;

}

 void increment()
{	
	
	 
	printf("%d\n",var);

	var++;	
	printf("%d\n",var);

}

