#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Swap(int *x, int *y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 20;
	int b = 30;
	printf("a=%d,b=%d\n", a, b);
	Swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}