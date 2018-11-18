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
//������ͷ�ڵ�ĵ�����L����˳��¼��n��Ԫ��
void CreatList(linklist &L)
{
	int i = 0;
	int n = 0;
	L = (linklist)malloc(sizeof(lnode));
	linklist q = L;
	L->next = NULL;
    printf("������Ҫ¼��ĳ�ʼԪ�ظ�����\n");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		linklist p = (linklist)malloc(sizeof(lnode));
		printf("�������%d��Ҫ¼���Ԫ�أ�\n",i+1);
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
		printf("�鿴λ�ò�����\n\n\n");
		return ERROR;
	}
	e=p->data;
	printf("�鿴Ԫ��Ϊ%d\n",e);
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
	printf("������Ҫ�����λ�ã�\n");
	scanf("%d",&i);
	while (p && j<i-1)
	{
		p = p->next;
		j++;
	}
	if (!p || j>i-1) 
	{
		printf("����λ�ò�����\n\n\n");
		return ERROR;
	}
	printf("������Ҫ�����Ԫ�أ�\n");
	scanf("%d",&e);
	s->next = p->next;
	s->data = e;
	p->next = s;
	printf("����ɹ�\n\n\n");
	return OK;
}
int LinkDelete(linklist &L)
{
	int i = 0;
	int e = 0;
	linklist q = NULL;
	linklist p = L;
	int j = 0;
	printf("������Ҫɾ����Ԫ��λ�ã�\n");
	scanf("%d",&i);
	while (p->next && j<i-1)//�ҵ���i����㣬����qָ������ǰ��
	{
		p = p->next;
		j++;
	}
	if(!(p->next) || j>i-1)
	{
		printf("ɾ��λ�ò�����\n\n\n");
		return ERROR;
	}
	q = p->next;
	p->next = q->next;
	e = q->data;
	printf("ɾ����Ԫ��Ϊ%d\n\n\n",e);
	free(q);
	return OK;
}
void OperateMenu()

{
	printf("*******************\n");
	printf("1.¼���ʼԪ��\n");
	printf("2.����Ԫ��\n");
	printf("3.ɾ��Ԫ��\n");
	printf("4.���Ԫ��\n");
	printf("5.�������Ԫ��\n");
	printf("0.�˳�����\n");
	printf("*******************\n");
	printf(":)��ѡ��\n");
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
			printf("������Ҫȡ����Ԫ��λ�ã���1��ʼ����\n");
	        scanf("%d",&i);
			GetElem(L,i,e);
			break;
		case 5:
			GetAllElem(L);
			break;
	    case 0: 
		    return 0;
	    default:printf("ѡ�����������ѡ��\n");
	    }
	}
	return 0;
}