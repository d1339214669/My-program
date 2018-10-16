#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void ReverseString(char *arr)
{
	if(*(arr+1) != '\0')
	{
		ReverseString(arr+1);
	}
	printf("%c", *arr);
}


int main()
{
	char arr[] = "asdfgh";
    ReverseString(arr);
	printf("\n");
	return 0;
}