#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int IsTurn(char *str1, char *str2, int len)
{
	int i = 0;
	for (i=0; i<len; i++)
	{
		int j = 0;
		int count = 0;
		for (j=0; j<len; j++)
		{
			int k = i+j;
			if (k >= len)
				k = i+j-len;
			if (*(str1+j) == *(str2+k))
				count++;
		}
		if(len == count)
			return 1;
	}
	return 0;
}
int main()
{
	char str1[] = "ABCD";
	char str2[] = "CDAB";
	int len_str1 = strlen(str1);
	int len_str2 = strlen(str2);
	int ret = 0;
	if (len_str1 == len_str2)
		ret=IsTurn(str1, str2, len_str1);
	else
		ret = 0;
	if (1 == ret)
		printf("ÊÇ\n");
	else
		printf("²»ÊÇ\n");
	return 0;
}