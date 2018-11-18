#define _CRT_SECURE_NO_WARNINGS 1
#define ERROR -1
#define OK 0
#include<stdio.h>
#include<malloc.h>
typedef struct LNode
{
	int data;
	LNode *next;
	 
}lnode,*linklist;
//创建带头节点的单链表L，并顺序录入n个元素
void CreatList(linklist &L)
{
	int i = 0;
	int n = 0;
	L = (linklist)malloc(sizeof(lnode));
	linklist q = L;
	L->next = NULL;
    printf("请输入要录入的初始元素个数：\n");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		linklist p = (linklist)malloc(sizeof(lnode));
		printf("请输入第%d个要录入的元素：\n",i+1);
		scanf("%d",&p->data);
		p->next = q->next;
		q->next = p;
        q=p;
	}
	printf("\n\n");
}
int GetElem(linklist &L, int i, int &e)
{
	linklist p = L->next;
	int j = 1;
	while (p && j<i)
	{
		p=p->next;
		j++;
	}
	if (!p||j>i)
	{
		printf("查看位置不合理\n\n\n");
		return ERROR;
	}
	e=p->data;
	printf("查看元素为%d\n",e);
	return OK;
}
int GetAllElem(linklist &L)
{
	linklist p = L->next;
	while(p)
	{
	printf("%d\n",p->data);
	p = p->next;
	}
	printf("\n\n");
	return OK;
}
int LinkInsert(linklist &L)
{
	int i = 0;
	int e = 0;
	linklist s = (linklist)malloc(sizeof(lnode));
	linklist p = L;
	int j = 0;
	printf("请输入要插入的位置：\n");
	scanf("%d",&i);
	while (p && j<i-1)
	{
		p = p->next;
		j++;
	}
	if (!p || j>i-1) 
	{
		printf("插入位置不合理\n\n\n");
		return ERROR;
	}
	printf("请输入要插入的元素：\n");
	scanf("%d",&e);
	s->next = p->next;
	s->data = e;
	p->next = s;
	printf("插入成功\n\n\n");
	return OK;
}
int LinkDelete(linklist &L)
{
	int i = 0;
	int e = 0;
	linklist q = NULL;
	linklist p = L;
	int j = 0;
	printf("请输入要删除的元素位置：\n");
	scanf("%d",&i);
	while (p->next && j<i-1)//找到第i个结点，并令q指向它的前驱
	{
		p = p->next;
		j++;
	}
	if(!(p->next) || j>i-1)
	{
		printf("删除位置不合理\n\n\n");
		return ERROR;
	}
	q = p->next;
	p->next = q->next;
	e = q->data;
	printf("删除的元素为%d\n\n\n",e);
	free(q);
	return OK;
}
void OperateMenu()

{
	printf("*******************\n");
	printf("1.录入初始元素\n");
	printf("2.插入元素\n");
	printf("3.删除元素\n");
	printf("4.输出元素\n");
	printf("5.输出所有元素\n");
	printf("0.退出程序\n");
	printf("*******************\n");
	printf(":)请选择：\n");
}
int main()
{
	int e = 0;
	int i = 0;
	int choice = 0;
	linklist L = NULL;
	while (1)
	{
		OperateMenu();
	    scanf("%d", &choice);
	    switch (choice)
	    {
	    case 1: 
		    CreatList(L);
		    break;
	    case 2:		    
			LinkInsert(L);
		    break;
	    case 3:		
            LinkDelete(L);
		    break;
		case 4:
			printf("请输入要取出的元素位置（从1开始）：\n");
	        scanf("%d",&i);
			GetElem(L,i,e);
			break;
		case 5:
			GetAllElem(L);
			break;
	    case 0: 
		    return 0;
	    default:printf("选择出错，请重新选择！\n");
	    }
	}
	return 0;
}