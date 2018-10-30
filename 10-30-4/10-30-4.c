#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int my_strlen(const char *str)
{
	int len = 0;
	assert(str);
	while(*str++!='\0')
		len++;
	return len;	
}

void reverse(char *start, char *end)
{	
	assert(start);	
	assert(end);	
	while (start <= end)	
	{		
		char tmp = *start;
		*start = *end;		
		*end = tmp;
		start++;		
		end--;
	}
}

void str_reverse(char *str)
{
	int len = my_strlen(str);
	assert(str);
	reverse(str, str + len - 1);
	while (*str != '\0')
	{
		char *p = str;
		while ((*str!=' ') && (*str!='\0'))
		{
			str++;
		}
		reverse(p, str - 1);
		if(*str == ' ')
			str++;
	}
}
int main()
{
	char str[] = "student a am i";
	str_reverse(str);
	printf("%s\n", str);
	return 0;
}