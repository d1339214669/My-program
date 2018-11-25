#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strcmp(const char *str1, const char *str2)
{
	assert(str1);
	assert(str2);
	while (*(str1) == *(str2))
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return 1;
	else
		return -1;
}

int main()
{
	char *p1 = "ab";
	char *p2 = "abcd";
	char *p3 = "defab";
	printf("%d\n", my_strcmp(p1, p1));
	printf("%d\n", my_strcmp(p2, p1));   
	printf("%d\n", my_strcmp(p1, p3));       
	return 0;
}