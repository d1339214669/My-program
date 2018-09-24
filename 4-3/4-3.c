#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	int j = 0; 
	scanf("%d",&n);
    sum = j = n;
	for(i = 0;i < 4;i++)
	{
		n = j + n * 10;
		sum = sum + n;
	}
	printf("%d",sum);
	return 0;
}