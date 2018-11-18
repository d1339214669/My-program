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
		printf("ÇëÊäÈëÃÜÂë:>\n");
		scanf("%s",arr2);
		if(strcmp(arr1,arr2) == 0)
		{
			printf("ÃÜÂëÕıÈ·\n");
		    break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
			count++;
		}
	}
	if(3 == count)
	    printf("ÍË³ö³ÌĞò\n");
	return 0;
}