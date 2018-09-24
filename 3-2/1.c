#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 1;i <= 99;i+=2)
	{
        sum1=sum1+1/i;
	}
	for (i = 2;i <= 100;i+=2)
	{
        sum2=sum2+1/i;
	}
    printf("sum = %d\n",sum1 - sum2);
	return 0;
}