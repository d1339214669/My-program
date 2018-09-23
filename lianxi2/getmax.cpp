#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i=0;
	int max=0;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
        if(a[i]>max)
			max=a[i];
	}
	printf("最大值为：%d",max);
	return 0;
}