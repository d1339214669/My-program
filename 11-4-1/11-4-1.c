#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

void Turn(char *p, int n, int sz)
{
	char a = 0;
	char *q = &a;
	int i = 0;
	assert(p!=NULL && n<=sz);
	for (i=0; i<n; i++)
	{
		*(q+i) = *(p+i);
	}
	for (i=0; i<sz-n; i++)
	{
		*(p+i) = *(p+n+i);
	}
	for (i=0; i<n; i++)
	{
		*(p+sz-n+i) = *(q+i);
	}

}

int main()
{
	char arr[] = "ABCD";
	int n = 0;
	int sz = strlen(arr);
	scanf("%d", &n);
	Turn(arr, n, sz);
	printf("%s", arr, sz);
	return 0;
}