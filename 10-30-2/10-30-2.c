#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", a+((b-a)>>1));   //>>1��/2Ч����ͬ
	return 0;
}