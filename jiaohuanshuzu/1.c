#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0};
	char b[100]={0};
	char c[100]={0};
	printf("�����һ���ַ�����");
	gets(a);
	printf("����ڶ����ַ�����");
	gets(b);
    strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
	printf("�������һ���ڶ����ַ����ֱ�Ϊ��\n");
	puts(a);
	puts(b);
	return 0;
}