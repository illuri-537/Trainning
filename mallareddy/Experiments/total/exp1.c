#if 0
#include<stdio.h>
//int a=20;
int main()
{
//unsigned int x;
//	int a;
//	int b=10;
//	scanf("%d",&x);
//	x=x&0177;
//	printf("%d",x);
//	printf("hELLO \c world");
unsigned int mask = 0x0f;   // 00001111b
 unsigned int  value = 0x55;  // 01010101b
   unsigned int mask1= mask & value;
	printf("%d",mask1);
}
#endif

#if 0

int main()
{

	int a = 10;

	printf("%d %d %d %d %d \n",a--,--a,a--,--a,a--);

	return 0;
}
#endif
#if 0

int main()
{
	int a[10] = {1,13,34,5,6,7,12,15,17,18};

	int ch;
	int i =0;
int	sum = 0;
int sum1 = 0;
	while(1){
	printf("choice\n1.1-5\n2.6-10\n");
	scanf("%d",&ch);
	switch(ch) {

		case 1:
				
				for(i=0;i<10;i++) {

					if(a[i] < 10){

						sum = sum + a[i];
					}
				}
				printf("%d\n",sum);
				break;

		case 2:
				
				for(i=0;i<10;i++) {

					if(a[i] >=11&&a[i]<=20 ){

						sum1 = sum1 + a[i];
					}
				}
				printf("%d\n",sum1);

				break;

		case 3: exit(0);

	}
}
return 0;
}

#endif

#if 1
#include<stdio.h>

int b[303136];

int main(void) {

	static 	char a[2]  = {'c','h'};

	// int b;
	
		return 0;
}
#endif
