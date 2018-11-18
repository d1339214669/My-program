#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define LIST_INIT_SIZE 100
#define LIST_INCREMENT 10
struct  student
{
	char name[20];
	int num;
	double score;
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
	L.elem = (student *)malloc(LIST_INIT_SIZE*sizeof(student));
	if(! L.elem)
		printf("存储分配失败");
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return L;
}
//在线性表L的第i个位置插入新的元素e
SqList ListInsertSq(SqList &L, int i, student &e)
{
	student *newbase = NULL;
	student *q = NULL;
	student *p = NULL;
	if((i < 1) || (i > L.length + 1))
		printf("插入位置不合法");
	if(L.length>=L.listsize)
	{
		newbase = (student *)realloc(L.elem,(L.listsize+LIST_INCREMENT)*sizeof(student));
		if(! newbase)
			printf("增加存储空间分配失败");
		L.elem = newbase;
		L.listsize +=LIST_INCREMENT;
	}
	q=&(L.elem[i-1]);
	for(p=&(L.elem[L.length-1]); p >= q; --p)
		*(p+1) = *p;
	*q = e;
	++L.length;
	return L;
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
	printf("%s %d %f",e.name,e.num,e.score);
	return 0;
}
int main()
{
	int i = 0;
	student stu1 = {"ding",01,41.1};
	SqList L = InitListSq();
	i = 1;
	L = ListInsertSq(L,i,stu1);
	GetElemSq(L,i);
	return 0;
}