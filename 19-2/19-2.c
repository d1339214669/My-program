#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strncat(char* p, const char* q, int sz)
{
	int i = 0;
	int j = 0;
	assert(p);
	assert(q);
	while(*(p+i) != '\0')
	{
		i++;
	}
	while(j<sz)
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
	printf("%s\n", my_strncat(str1, str2, 6));
	return 0;
}