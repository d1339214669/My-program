#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void MulTable(int n)
{
	int i = 0;
	for (i=1; i<n+1; i++)
	{
		int j = 0;
		for(j=1; j<i+1; j++)
		    printf("%d*%d=%-2d ",i,j,i*j);
	    printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	MulTable(n);
	return 0;
}