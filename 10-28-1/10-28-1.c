#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int count_one_bits(unsigned int value) 
{ 
	int count = 0;
	while (value!=0)
	{
		if (value%2==1)
			count++;
		value = value/2;
	}
	return count;
} 

int main()
{
	unsigned int n = 0;
	scanf("%d", &n);
	printf("%d", count_one_bits(n));
	return 0;
}
