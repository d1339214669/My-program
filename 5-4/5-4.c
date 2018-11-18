#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch = 0;
	while(1)
	{
		scanf("%c",&ch);
		if(ch>='0' && ch<='9')
			ch = 0;
		else if(ch>='a' && ch<='z')
			ch = ch - 32;
		else if(ch>='A' && ch<='Z')
		    ch = ch + 32;
		printf("%c",ch);
	}
	return 0;
}