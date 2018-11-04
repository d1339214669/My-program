#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<stdio.h>


void Sort(int *arr,int sz)
{
	int temp = 0;
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		if (*(arr+i)%2 == 0)
		{
			int j = 0;
			for (j=i+1; j<sz; j++)
			{
				if (*(arr+j)%2 == 1)
			    {
				    temp = *(arr+j);
		            *(arr+j) = *(arr+i);
		            *(arr+i) = temp;
					break;
		    	} 
			}		
		}

	}
}
int main()
{
	int i = 0;
	int arr[]={0,1,2,3,4,5};
	int sz = sizeof(arr)/sizeof(arr[0]);
	Sort(arr,sz);
	for(i=0; i<sz; i++)
		printf("%d ", arr[i]);
	return 0;
}