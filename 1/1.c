#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Search(int *p, int sz)
{
	int i = 0;
	for (; i<sz; i++)
	{
		int j = 0;
		int count = 0;
		for (; j<sz; j++)
		{
			if(*(p+i) == *(p+j))
				count++;
		}
		if(1 == count)
			printf("%d\n", *(p+i));
	}
}

int main()
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 4, 3, 2, 1, 0};
	int sz = sizeof(a)/sizeof(a[0]);
	Search(a, sz);

	return 0;
}