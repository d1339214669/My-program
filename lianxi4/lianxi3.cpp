#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
	int j=0;
	int k=0;
	scanf("%d%d",&i,&j);
	if(i<j)
		k=i;
	else
		k=j;
	while(i%k!=0||j%k!=0)
		k--;
	printf("%d",k);
	return 0;
}