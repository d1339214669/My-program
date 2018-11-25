#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void* my_memcpy(void* dst, const void* src, int sz)
{
	void *ret = dst;
	while(sz--)
	{
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return(ret);
}

int main()
{
	char str1[] = "Hello world";
	char str2[15] = {0};
	my_memcpy(str2, str1, strlen(str1)+1);
	printf("%s\n", str1);
	return 0;
}