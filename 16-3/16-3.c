#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int DigitSum(unsigned int n)
{
	int sum = 0;
	if(n>9)
	{
		sum = DigitSum(n/10)+n%10;
		n = n/10;
		return sum;
	}
	else
		return n;
}

int main()
{	
	unsigned int n = 0;
	int sum = 0;
	scanf("%d", &n);
    sum = DigitSum(n);
	printf("%d\n", sum);
	return 0;
}