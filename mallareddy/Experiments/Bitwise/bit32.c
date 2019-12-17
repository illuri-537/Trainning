#include<stdio.h>

int main(void)
{

	int num = 174;

	int i;

	int count =0;

	int count1 = 0;

	int m;

	int k;

	int j;

	int k1;

	for(i = 0;i<32;i++) {

		m = num>>i;
		if(m&1){
			printf("1");

			
		count = count+1;
		}

		else
		{
			printf("0");

			count1 = count1 + 1;
		}

	
	
	}
	printf("\n");
	printf("set count=%d\n",count);

	printf("clear count1 = %d\n",count1);


	for(j = 31;j>=0;j--) {

		k = num>>j;
		if(k == 1){

			k = k^1;
			printf("%d",k);		
	}

		else
		{

		k = k^1;

		printf("%d",k);

		}
	}
	return 0;
}
