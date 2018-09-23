#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//方法一：
	int i=0;
	int j=0;
	int a=0;
	printf("请输入i：\n");
	scanf("%d",&i);
	printf("请输入j：\n");
	scanf("%d",&j);
	printf("交换前：i=%d,j=%d\n",i,j);
    a=i;
	i=j;
	j=a;
	printf("交换后：i=%d,j=%d\n",i,j);
	return 0;
 //方法二：
	//int i=0;
	//int j=0;
	//printf("请输入i：\n");
	//scanf("%d",&i);
	//printf("请输入j：\n");
	//scanf("%d",&j);
	//printf("交换前：i=%d,j=%d\n",i,j);
	//i=i+j;
	//j=i-j;
	//i=i-j;
	//printf("交换后：i=%d,j=%d\n",i,j);
	//return 0;
//方法三：
	//int i=0;
	//int j=0;
	//printf("请输入i：\n");
	//scanf("%d",&i);
	//printf("请输入j：\n");
	//scanf("%d",&j);
	//printf("交换前：i=%d,j=%d\n",i,j);
	//i=i^j;
 //   j=i^j;
	//i=i^j;
	//printf("交换后：i=%d,j=%d\n",i,j);
	//return 0;



}