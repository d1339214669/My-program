#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Fib(int n)
{
	if (n<=2)
		return 1;
	else
	{
		 return Fib(n-1)+Fib(n-2);
	}
}
int Fib1(int n)
{
	int i = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	for(i=0; i<=n-3; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}	 
	return c;
}
int main()
{
    int n = 0;
	int ans = 0;
	int ans1 = 0;
	scanf("%d", &n);
    ans = Fib(n);
	printf("ans=%d\n", ans);
	ans1 = Fib1(n);
	printf("ans1=%d\n", ans1);
	return 0;
}