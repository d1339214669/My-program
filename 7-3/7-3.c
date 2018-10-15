#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int IsLeapYear(int year)
{
	return ((year%4==0 && year%100!=0) || (year%400==0));
}

int main()
{
	int year = 0;
	scanf("%d", &year);
	if(IsLeapYear(year) == 1)
		printf("%d������\n",year);
	else
		printf("%d��������\n",year);
	return 0;
}