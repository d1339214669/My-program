#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp_string(const void *s, const void *t)
{	
	return strcmp(*(char **)s, *(char **)t);
}
int cmp_int(const void *x, const void *y)
{
	int *_x = (int*)x;
	int *_y = (int*)y;
	if (*_x > *_y)
	{
		return 1;
	}
	else if (*_x < *_y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int cmp_float(const void*m, const void *n)
{
	float*_m = (float*)m;
	float*_n = (float*)n;
	if (*_m > *_n)
	{
		return -1;
	}
	else if (*_m < *_n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i = 0;
	char *str[] = {"aaaa","eeee","cccc","dddd","bbbb"};
	int arr[] = { 1, 3, 5, 8, 9, 6, 0 };
	float a[] = { 1.0,2.0,7.0,3.0,4.0,0.0 };
	int len = sizeof(str) / sizeof(str[0]);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int size = sizeof(a) / sizeof(a[0]);
	qsort(str, len, sizeof(char*), cmp_string);
	for(; i<len; i++)
		printf("%s\n",str[i]);
	qsort(arr, sz, sizeof(int), cmp_int);
	for(i=0; i<sz; i++)
		printf("%d\n",arr[i]);
	qsort(a, size, sizeof(float), cmp_float);
	for(i=0; i<size; i++)
		printf("%f\n",a[i]);
	return 0;
}
