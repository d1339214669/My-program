#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	unsigned int n = 0;
	int i = 0;
	int j = 0;
	int arr[32] = {0};
	scanf("%d", &n);
    while (n!=0)//������nת��Ϊ���������У������������arr
	{
		arr[i] = n%2;
		n = n/2;
		i++;//��¼���ֵĶ�������λ�����ı��±�
	}
	if(i%2==0)
	{
		printf("ż��λΪ��\n");
		for(j=i; j>0; j=j-2)
		{
			printf("%d", arr[j-1]);
		}
		printf("\n");
		printf("����λΪ��\n");
		for(j=i-1; j>0;j=j-2)
		{
			printf("%d", arr[j-1]);
		}
		printf("\n");
	}
	else
	{
		printf("����λΪ��\n");
		for(j=i; j>0; j=j-2)
		{
			printf("%d", arr[j-1]);
		}
		printf("\n");
		printf("ż��λΪ��\n");
		for(j=i-1; j>0;j=j-2)
		{
			printf("%d", arr[j-1]);
		}
		printf("\n");
	}
	return 0;
}