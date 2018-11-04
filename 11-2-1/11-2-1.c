#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int search(int arr[][3], int key, int row, int col)
{
	int x = 0;
	int y = col-1;
	while((x<row) && (y>=0))
	{
		if(key > arr[x][y])
			x++;
		else if(key == arr[x][y])
			return 1;
		else
			y--;
	}
	return 0;
}
int main()
{
	int arr[][3] = {1,2,3,4,5,6,7,8,9};
	int key = 0;
	scanf("%d", &key);
	if(1 == search(arr,key,3,3))
		printf("´æÔÚ\n");
	else
		printf("²»´æÔÚ\n");
	return 0;
}