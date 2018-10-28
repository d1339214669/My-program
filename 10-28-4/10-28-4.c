#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	unsigned int m = 0;
	unsigned int n = 0;
	int count = 0;
	scanf("%d", &m);
	scanf("%d", &n);
	while((m>n?m:n)!=0)
	{
		if(m%2!=n%2)
			count++;
		m=m/2;
		n=n/2;
	}
	printf("%d", count);
	return 0;

}