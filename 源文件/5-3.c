#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "asd123";
	char arr2[7] = {0};
	int i = 0;
	int count = 0;
	for(i=0; i<3; i++)
	{
		printf("����������:>\n");
		scanf("%s",arr2);
		if(strcmp(arr1,arr2) == 0)
		{
			printf("������ȷ\n");
		    break;
		}
		else
		{
			printf("�������\n");
			count++;
		}
	}
	if(3 == count)
	    printf("�˳�����\n");
	return 0;
}