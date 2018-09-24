#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[14] = {"*************"};
	char b[14] = {"             "};
    int i = 0;
	int j = 0;
	for(i = 0;i < 13;i++)
	{
		if(i < 7)
		{
			for(j = 0;j <= i;j++)
		    {
			    b[6-i] = '*';
			    b[6+i] = '*';
		    }
		}
		if(i >= 7)
		{
			for(j = 0;j <= i-7;j++)
		    {
			    b[i-7] = ' ';
			    b[19-i] = ' ';
		    }
		}
		puts(b);
		printf("\n");
	}
	return 0;
}