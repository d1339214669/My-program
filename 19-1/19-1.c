#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

char* my_strncpy(char *p,const char* q, int sz)
{
	int i = 0;
	assert(p);
	assert(q);
	while(i<sz)
	{
		*(p+i) = *(q+i);
		i++;
	}
	return p;
}

int main()
{
	char str1[6] = {1,1,1,1,1,1};
	char str2[] = "world";
	printf("%s\n",my_strncpy(str1,str2,6));
	return 0;
}