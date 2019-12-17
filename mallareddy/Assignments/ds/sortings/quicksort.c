#include<stdio.h>

#include<stdlib.h>

#define MAX 5
int main()
{

	char *arr = (char *)malloc(sizeof(char));
	int a[MAX];
	int low = 0;
	int high = MAX - 1; 
	int i;
	printf("enter the elements:\n");
	for( i =0; i<MAX;i++) {
	fgets(arr,MAX,stdin);
	a[i]=atoi(arr);
	}
	a[MAX] =quicksort(a,low,high);

	for( i = 0; i< MAX; i++) {


			printf("%d\n",a[i]);
	}

	return 0;


}

int quicksort(int arr[],int low,int high)

{

	int pivot;

	int temp;

	pivot =high;

	int i;

	int j;

	if(low < high) {

		for(j = 0;j < high; j++) {
				
				if( *(arr + j) < *(arr + pivot)) {
						
						i++;
						temp = *(arr + i);

						*(arr + i) = *(arr + j);

						*(arr + j) = temp;
printf("%d\n",*(arr+j));
				
				}
		}
				if(j==pivot){
						i++;

						temp = *(arr + i);

						*(arr + i) = *(arr + pivot);

						*(arr + pivot)= temp;
				}

		

		quicksort(arr,low,pivot -1);

		quicksort(arr,pivot + 1,high);
	}
return arr;
}

						


			
