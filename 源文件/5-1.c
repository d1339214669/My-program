#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**********************\n");
	printf("*****������С��Ϸ*****\n");
	printf("**********************\n");
	printf("******1.��ʼ��Ϸ******\n");
	printf("******0.�˳���Ϸ******\n");
	printf("**********************\n");
}
void game()
{
	int ret = 0;
	int num = 0;
	ret = rand() % 100 + 1;
	printf("%d\n", ret);
	while(1)
	{
	    printf("�������:>\n");
	    scanf("%d",&num);
		if(ret == num)
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
		    break;
		}
		else if(ret > num)
		{
			printf("��С��!\n");
		}
		else
		{
            printf("�´���!\n");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("����������������룡\n");
				break;
		}
	}while(input);
	return 0;
}