#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define LISTINITSIZE 100
#define LISTINCREMENT 10

struct  student
{
	char name[20];
	int num;
	float score;
};
typedef struct 
{
	struct student *elem;
	int length;
	int listsize;
}SqList;
//构建一个空线性表
SqList InitListSq()
{
    SqList L;
	L.elem = (student *)malloc(LISTINITSIZE*sizeof(student));
	if(! L.elem)
		printf("存储分配失败");
	L.length = 0;
	L.listsize = LISTINITSIZE;
	return L;
}
//在线性表L的第i个位置插入新的元素e
int ListInsertSq(SqList &L, int i, student &e)
{
	student *newbase = NULL;
	student *q = NULL;
	student *p = NULL;
	if((i < 1) || (i > L.length + 1))
	{
		printf("插入位置不合法");
        return -1;
	}
	if(L.length>=L.listsize)
	{
		newbase = (student *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(student));
		if(! newbase)
		{
			printf("增加存储空间分配失败");
			return -1;
		}
		L.elem = newbase;
		L.listsize +=LISTINCREMENT;
	}
	q=&(L.elem[i-1]);
	for(p=&(L.elem[L.length-1]); p >= q; --p)
		*(p+1) = *p;
	*q = e;
	++L.length;
	return 0;
}
int ListDelectSq(SqList &L, int i)
{
	student *p = NULL;
	student *q = NULL;
	if((i < 1) || (i > L.length + 1))
	{
		printf("删除位置不合法");
        return -1;
	}
	p = &L.elem[i-1];
	q = L.elem+L.length-1;
	for(++p; p<=q; p++)
		*(p-1) = *p;
	--L.length;
	return 0;
}
 int GetElemSq(SqList &L, int i)
{
	student e;
	if((i<1)||(i>L.length))
	{
		printf("查询错误\n");
		return -1;
	}
	e = L.elem[i-1];
	printf("姓名：%s 学号：%d 成绩：%.1f\n",e.name,e.num,e.score);
	return 0;
}
void OperateMenu()

{
	printf("  网络1602袁锦滋\n");
	printf("*******************\n");
	printf("1.录入学生信息\n");
	printf("2.删除某某学生信息\n");
	printf("3.输出某某学生信息\n");
	printf("4.输出所有学生信息\n");
	printf("0.退出程序\n");
	printf("*******************\n");
	printf(":)请选择：");
}
 
int main()
{
	student stu;
	int choice;
	int i = 0;
	SqList L = InitListSq();
	while (1)
	{
		OperateMenu();
	    scanf("%d", &choice);
	    switch (choice)
	    {
	    case 1: 
		    printf("请输入要录入的位置:\n");
		    scanf("%d",&i);
		    printf("请输入学生信息（姓名，学号，成绩）:\n");
		    scanf("%s %d %f",&stu.name,&stu.num,&stu.score);
		    ListInsertSq(L,i,stu);
		    break;
	    case 2:		    
			printf("请输入要删除的位置:\n");
		    scanf("%d",&i);
			ListDelectSq(L, i);
		    break;
	    case 3:			
			printf("请输入要查询的位置:\n");
		    scanf("%d",&i); 
			GetElemSq(L,i);
		    break;
		case 4:
			for(i=0; i<=L.length; i++)
				GetElemSq(L,i);
	    case 0: 
		    return 0;
	    default:printf("选择出错，请重新选择！\n");
		}
	}
}

	
 

 

 
