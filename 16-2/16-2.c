#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Fac(int n, int k)
{
	if(k==0)
		return 1;
	else
		return n*Fac(n,k-1);
}

int main()
{
	int n = 0;
	int k = 0;
	int ans = 0;
	scanf("%d%d", &n, &k);
    ans = Fac(n, k);
	printf("%d\n", ans);
	return 0;
}