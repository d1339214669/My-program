#define _CRT_SECURE_NO_WARNINGS 1

/*
����Ļ�ϴ�ӡ������ǡ� 
1              
1 1            
1 2 1           
1 3 3 1         
*/
#include<stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &n);//������ǵ�������
	for (i=0; i<n; i++)
	{
		int y = 1;
		for(j=0; j<=i; j++)
		{
			if(0==j)
			{
				printf("%d ", y);
			}
			else
			{
				y = y*(i-j+1)/j;
				printf("%d ", y);
			}
		}
		printf("\n");
	}

	return 0;
}