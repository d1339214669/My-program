#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void* my_memmove(void* dst, const void* src, int count)
{
	void* ret = dst;
	if((char*)dst<((char*)src+count) && (dst > src))
	{
		dst = (char*)dst + count -1;
		src = (char*)src + count -1;
		while(count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while(count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	return ret;
}

int main()
{
	char str[] = "Hello,world!";
	my_memmove(str, str+5, 4);
	printf("%s\n", str);
	return 0;
}