#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Strlen(char *arr)
{
	int length = 0;
	while(*arr!='\0')
	{
		length++;
		arr = arr+1;
	}
	return length; 
}

int Strlen1(char *arr)
{
	int length = 0;
	if(*(arr+1)!='\0')
	{
		length = Strlen1(arr+1);
	}
	return length+1;
}

int main()
{
	char arr[]="asdfgh";
	printf("Strlen(arr)=%d\n", Strlen(arr));
	printf("Strlen1(arr)=%d\n", Strlen1(arr));
	return 0;
}