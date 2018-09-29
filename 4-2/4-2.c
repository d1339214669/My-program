#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for(i = 0;i < 1000;i++)
	{
	    int j = i;
		int k = i;
		int sum = 0;
		int count = 1;
		while(j>9)
		{
			j = j/10;
			count++;
		}
		for(j = 0;j < count;j++)
		{
			sum = (int)pow((k%10),count)+sum;
			k = k/10;
		}
		if(sum == i)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}
