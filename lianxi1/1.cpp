#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//����һ��
	int i=0;
	int j=0;
	int a=0;
	printf("������i��\n");
	scanf("%d",&i);
	printf("������j��\n");
	scanf("%d",&j);
	printf("����ǰ��i=%d,j=%d\n",i,j);
    a=i;
	i=j;
	j=a;
	printf("������i=%d,j=%d\n",i,j);
	return 0;
 //��������
	//int i=0;
	//int j=0;
	//printf("������i��\n");
	//scanf("%d",&i);
	//printf("������j��\n");
	//scanf("%d",&j);
	//printf("����ǰ��i=%d,j=%d\n",i,j);
	//i=i+j;
	//j=i-j;
	//i=i-j;
	//printf("������i=%d,j=%d\n",i,j);
	//return 0;
//��������
	//int i=0;
	//int j=0;
	//printf("������i��\n");
	//scanf("%d",&i);
	//printf("������j��\n");
	//scanf("%d",&j);
	//printf("����ǰ��i=%d,j=%d\n",i,j);
	//i=i^j;
 //   j=i^j;
	//i=i^j;
	//printf("������i=%d,j=%d\n",i,j);
	//return 0;



}