#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int search(int arr[], int left,int right, int n)
{
	while(left <= right)
	{
		int mid=(right-left)/2+left;
		if(arr[mid] < n)
		{
			left = mid+1;
		}
		else if(arr[mid] > n)
		{
			right = mid-1;
		}
		else
		{
			return mid;
	    }
    }
	return -1;
}
int main()
{
	int n = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	int left = 0;
	int ret = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	scanf("%d",&n);
    ret = search(arr,left,right,n);
	if(ret != -1)
		printf("找到了，对应数组下标为%d\n",ret);
	else
	    printf("找不到\n");
	return 0;
}