#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	unsigned int n = 0;
	int i = 0;
	int j = 0;
	int arr[32] = {0};
	scanf("%d", &n);
    while (n!=0)//将数字n转化为二进制序列，反向存入数组arr
	{
		arr[i] = n%2;
		n = n/2;
		i++;//记录数字的二进制数位数并改变下标
	}
	if(i%2==0)
	{
		printf("偶数位为：\n");
		for(j=i; j>0; j=j-2)
		{
			printf("%d", arr[j-1]);
		}
		printf("\n");
		printf("奇数位为：\n");
		for(j=i-1; j>0;j=j-2)
		{
			printf("%d", arr[j-1]);
		}
		printf("\n");
	}
	else
	{
		printf("奇数位为：\n");
		for(j=i; j>0; j=j-2)
		{
			printf("%d", arr[j-1]);
		}
		printf("\n");
		printf("偶数位为：\n");
		for(j=i-1; j>0;j=j-2)
		{
			printf("%d", arr[j-1]);
		}
		printf("\n");
	}
	return 0;
}