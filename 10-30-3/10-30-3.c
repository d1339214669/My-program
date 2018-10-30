#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int ret = 0;
	int arr[] = {1,1,2,2,3};
	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		ret = ret^arr[i];
	}
	printf("%d\n", ret);
	return 0;
}