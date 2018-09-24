#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for(i = 1;i <= 100;i++)
	{
		int j = 0;
		j = i;
		if(i%10 == 9)
		{
			count++;
		}
		while(j > 10)
		{
			j = j/10;
			if(j%10 == 9)
			{
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}