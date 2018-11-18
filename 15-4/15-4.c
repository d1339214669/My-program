#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char* My_strcat(char* p, const char* q)
{
	int i = 0;
	int j = 0;
	while(*(p+i) != '\0')
	{
		i++;
	}
	while(*(q+j) != '\0')
	{
		*(p+i+j) = *(q+j);
		j++;
	}
	*(p+i+j) = '\0';
	return p;
}

int main()
{
	char str1[30] ="Hello ";
	char str2[] = "world!";
	printf("%s\n", My_strcat(str1, str2));
	return 0;
}