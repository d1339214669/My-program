#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Fac(int n)
{
	int mul = 1;
	while(n>0)
	{
		mul = n*mul;
		n--;
	}
	return mul;
}

int Fac1(int n)
{
	int mul = 1;
	if(n>0)
	{
		mul=Fac1(n-1)*n;
	}
	if(n==0)
		return 1;
	return mul;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
    printf("%d\n", Fac(n));
    printf("%d\n", Fac1(n));
	return 0;
}