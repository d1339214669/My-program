#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0};
	char b[100]={0};
	char c[100]={0};
	printf("输入第一个字符串：");
	gets(a);
	printf("输入第二个字符串：");
	gets(b);
    strcpy(c,a);
	strcpy(a,b);
	strcpy(b,c);
	printf("交换后第一个第二个字符串分别为：\n");
	puts(a);
	puts(b);
	return 0;
}