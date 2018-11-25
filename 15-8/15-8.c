#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strchr(const char* str, char ch)
{
	assert(str);
	assert(ch);
	while(*str != '\0')
	{
		if(ch == *str)
			return str;
		str++;
	}
	return NULL;
}
int main()
{
	char str[] = "asdf123";
	char ch = '1';
    char* p = NULL;
    int ret = 0;
    p = my_strchr(str, ch);
    ret = p - str + 1;
    printf("所查找的字符在字符串第%d个位置\n", ret);
	return 0;
}