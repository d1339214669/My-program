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
//����һ�������Ա�
SqList InitListSq()
{
    SqList L;
	L.elem = (student *)malloc(LISTINITSIZE*sizeof(student));
	if(! L.elem)
		printf("�洢����ʧ��");
	L.length = 0;
	L.listsize = LISTINITSIZE;
	return L;
}
//�����Ա�L�ĵ�i��λ�ò����µ�Ԫ��e
int ListInsertSq(SqList &L, int i, student &e)
{
	student *newbase = NULL;
	student *q = NULL;
	student *p = NULL;
	if((i < 1) || (i > L.length + 1))
	{
		printf("����λ�ò��Ϸ�");
        return -1;
	}
	if(L.length>=L.listsize)
	{
		newbase = (student *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(student));
		if(! newbase)
		{
			printf("���Ӵ洢�ռ����ʧ��");
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
		printf("ɾ��λ�ò��Ϸ�");
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
		printf("��ѯ����\n");
		return -1;
	}
	e = L.elem[i-1];
	printf("������%s ѧ�ţ�%d �ɼ���%.1f\n",e.name,e.num,e.score);
	return 0;
}
void OperateMenu()

{
	printf("  ����1602Ԭ����\n");
	printf("*******************\n");
	printf("1.¼��ѧ����Ϣ\n");
	printf("2.ɾ��ĳĳѧ����Ϣ\n");
	printf("3.���ĳĳѧ����Ϣ\n");
	printf("4.�������ѧ����Ϣ\n");
	printf("0.�˳�����\n");
	printf("*******************\n");
	printf(":)��ѡ��");
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
		    printf("������Ҫ¼���λ��:\n");
		    scanf("%d",&i);
		    printf("������ѧ����Ϣ��������ѧ�ţ��ɼ���:\n");
		    scanf("%s %d %f",&stu.name,&stu.num,&stu.score);
		    ListInsertSq(L,i,stu);
		    break;
	    case 2:		    
			printf("������Ҫɾ����λ��:\n");
		    scanf("%d",&i);
			ListDelectSq(L, i);
		    break;
	    case 3:			
			printf("������Ҫ��ѯ��λ��:\n");
		    scanf("%d",&i); 
			GetElemSq(L,i);
		    break;
		case 4:
			for(i=0; i<=L.length; i++)
				GetElemSq(L,i);
	    case 0: 
		    return 0;
	    default:printf("ѡ�����������ѡ��\n");
		}
	}
}

	
 

 

 
