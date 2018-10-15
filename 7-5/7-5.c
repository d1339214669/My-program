#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int IsPrime(int n)
{
	int i = 0;
	for (i=2; i<=sqrt(n); i++)
	{
		if (n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	if(IsPrime(n)==1)
		printf("%d是素数\n", n);
	else
		printf("%d不是素数\n", n);
	return 0;
}