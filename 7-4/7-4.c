#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Init(int arr[], int sz)
{
	int i = 0;
	for (i=0; i<sz; i++)
		scanf("%d",arr+i);
}

void Empty(int arr[], int sz)
{
	int i = 0;
	for (i=0; i<sz; i++)
	    *(arr+i) = 0;
}

void Reverse(int arr[], int sz)
{
	int i = 0;
	int temp = 0;
	for(i=0; i<sz/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[sz-1-i];
		arr[sz-1-i] = temp;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i=0; i<sz; i++)
	    printf("%d ",arr[i]);
    printf("\n");
}

int main()
{
	int arr[10] = {0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	Init(arr,sz);
	Print(arr, sz);
	Reverse(arr, sz);
	Print(arr, sz);
	Empty(arr, sz);
	Print(arr, sz);
	return 0;
}