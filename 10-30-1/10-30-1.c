#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

unsigned int reverse_bit(unsigned int n)
{
	int i = 0;
	unsigned int arr[32] = {0};
	for(i=0; i<32; i++)
	{
		arr[31-i] = n % 2;
		n = n / 2;
	}
	n = 0;
	for(i=0; i<32; i++)
	{
		n = n + arr[i] * (unsigned int) pow(2,i);
	}
	return n;
}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	printf("%u", reverse_bit(n));
	return 0;
}