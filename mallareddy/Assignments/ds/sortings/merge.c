#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int divide(int arr,int low,int high);
int divide(int arr,int low,int high)
{
	int mid;
	int n;
	low = 0;
	high = MAX;
	if(low < high){
	
	mid = (low+high)/2;

	divide(arr, low, mid);
	divide(arr, mid+1, high);
	merge(arr, low, mid, high);
    }
	return 0;
}

int merge(int arr[],int low,int mid,int high-1)
{
	int i = 0;
	int j = mid + 1;
	int index = 0;
	int temp[index];
	while (i <= mid && j <= high) {
		
			if(arr[i] < arr[j]) {
				
				temp[index] = arr[i];
				i++;
			index++;
			}

			else {
				
				temp[index] = arr[j];
				j++;
			index++;
			}
	}
	

			if(i > mid) {

				while (j <= high) {

					temp[index] = arr[j];
					j++;
					index++;
				}
			}

			if(j>high)
			{
				while(i<=mid)
				{
					temp[index]=arr[i];
					index++;
					i++;
				}
			}


	
	}


int main()
{

int arr[MAX];
int i;
int k = 0;
int low;
int high;
int temp[MAX];
int index;
printf("enter elements:\n");
for(i = 0;i <MAX;i++) {
scanf("%d",&arr[i]);
}
divide(arr,low,high);
for (k = low ; k<index; k++){

		arr[k] = temp[k];
		printf("%d\n",arr[k]);
}
return 0;
}
	 


