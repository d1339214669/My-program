#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strncmp(const char *str1, const char *str2, int sz)
{
	int count = 0;
	assert(str1);
	assert(str2);
	assert(sz>0);
	while (count < sz)
	{
		if(*(str1) == *(str2))
		{
			str1++;
			str2++;
			count++;
		}
		if ((*str1 > *str2) && (count < sz))
			return 1;
		else if ((*str1 < *str2) && (count < sz))
			return -1;
	}
	return 0;
}

int main()
{
	char *p1 = "ab";
	char *p2 = "abcd";
	char *p3 = "defab";
	printf("%d\n", my_strncmp(p1, p1, 2));
	printf("%d\n", my_strncmp(p2, p1, 2));   
	printf("%d\n", my_strncmp(p1, p3, 2));       
	return 0;
}