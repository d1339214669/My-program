#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* My_strcpy(char *p,const char* q)
{
	int i = 0;
	assert(p);
	assert(q);
	while(*(q+i) != '\0')
	{
		*(p+i) = *(q+i);
		i++;
	}
	*(p+i) = '\0';
	return p;
}

int main()
{
	char str1[6] = {1,1,1,1,1,1};
	char str2[] = "world";
	printf("%s\n",My_strcpy(str1,str2));
	return 0;
}