#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3];
	int i=0;
	int j=0;
	int k=0;
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
    for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
			if(a[i]<a[j])
		    {
			k=a[i];
			a[i]=a[j];
			a[j]=k;
			}
		
	}
	for(i=0;i<3;i++)
		printf("%d",a[i]);
	return 0;
}