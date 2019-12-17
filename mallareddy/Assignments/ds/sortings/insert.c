#include <stdio.h>

int main(void)
{
	int arr[5] = {5,6, 1,4,3};
	int temp;
	int i;
	int j;
	for ( i = 1 ;i < 5; i++) {
		for( j = 0 ; j<i; j++) {
			if ( arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
//				temp = arr[i];
	arr[j]=temp;
		}
	}
	}

for (i = 0; i< 5; i++) {

	printf("%d\n",arr[i]);
}
return 0;
}

