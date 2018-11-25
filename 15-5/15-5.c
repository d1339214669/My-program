#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	char* cp = (char*)str1;
	char* substr = (char*)str2;
	char* s1 = NULL;
	assert(str1);
	assert(str2);
	if(*str2 == '\0')
		return NULL;
	while(*cp)
	{
		s1 = cp;
		substr = (char*)str2;
		while(*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if(*substr == '\0')
			return cp;
		cp++;
	}
	return NULL;
}

int main()
{
	char str1[] = "asd123asdf";
	char str2[] = "asdf";
	printf("%s\n",my_strstr(str1, str2));
	return 0;

}