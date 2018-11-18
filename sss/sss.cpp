#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//��ͷ�������Ľ����Լ�����
typedef struct BITNode
{
	char data;// ����������
	struct BITNode *lchild,*rchild;//���� �Һ���
} BITNode,*BITree;
//��������ʼ��
void InitBITree(BITree &T)
{
	T = (BITree)malloc(sizeof(BITNode));//Ϊͷ�������ռ� 
	T->data=0;
	T->lchild=NULL;
	T->rchild=NULL;
}
//����
void CreatBITree(BITree &T)
{
	char e;//�������ֵ
	fflush(stdin);//������ 
	scanf("%c",&e);
	if(e=='#')
	{
		T=NULL;	//Ϊ��������#
	}
	else
	{
		T=(BITNode *)malloc(sizeof(BITNode));//Ϊ�½������ռ� 
		if(!T)
		{
			printf("����ռ�ʧ�ܣ�");
		}
		T->data=e;
		printf("\t����%c���ӵ�ֵ:\t",e);
		CreatBITree(T->lchild);
		printf("\t����%c�Һ��ӵ�ֵ:\t",e);
		CreatBITree(T->rchild);

	}
}
//�ж϶������Ƿ��ʼ��
int  JudgeInit(BITree &T)
{
	if(T==NULL)
	{
		return -1;//����-1���ʾδ��ʼ�� 
	}
	else
	{
		return 0;//����0���ʾ�Ѿ���ʼ�� 
	}
}

//�������
void LRD(BITree T)
{
	if(T!=NULL)
	{
		printf(" %c ",T->data);//���� 
		LRD(T->lchild);//���� 
		LRD(T->rchild);
		
	}
	else{
	printf("����");
	}
}
//�������
void LDR(BITree T)
{
	if(T!=NULL)
	{
		LDR(T->lchild);//���� 
		printf(" %c ",T->data);//���� 
		LDR(T->rchild);

	}
}
//�������
void DLR(BITree T)
{
	if(T!=NULL)
	{
		
		DLR(T->lchild);
		DLR(T->rchild);//���� 
		printf(" %c ",T->data);//���� 

	}
}
//�����������
int DeepBITree(BITree T)
{
    int deep =0;
	if(T)
	{
		int LeftDeep = DeepBITree(T->lchild);//��������������� 
		int RightDeep = DeepBITree(T->rchild);// ���������������
		deep=(LeftDeep>=RightDeep)?LeftDeep+1:RightDeep+1;//�������㷵��deep 
	}
	return deep;
}
//��������Ҷ�ӽ����
void LeafBITree(BITree T,int &n)
{
	if(T)
	{
		if(T->lchild==NULL&&T->rchild==NULL)//���Һ��Ӷ�Ϊ�� 
			n++;
		LeafBITree(T->lchild,n);//�ݹ��ж� 
		LeafBITree(T->rchild,n);
	}
}
//��ն�����
void ClearBITree(BITree &T) 
{
	if(T!=NULL)
	{ 

		ClearBITree(T->lchild);
		ClearBITree(T->rchild);
		free(T);
	}
}
//�˵�
void OperateMenu()
{
	printf("\t************************\t\n");
	printf("\t�������Ļ�������\t\n");
	printf("\t1.�������ĳ�ʼ��\t\n");
	printf("\t2.����\t\n");
	printf("\t3.�������\t\n");
	printf("\t4.�������\t\n");
	printf("\t5.�������\t\n");
	printf("\t6.��������������\t\n");
	printf("\t7.�����������Ҷ�ӽ����\t\n");
    printf("\t8.��ն�����\t\n");
	printf("\t0.����\t\n");
	printf("\t************************\t\n");
	printf("\t��ѡ��Ҫ���еĲ�����\t\n");
}
//������
int main()
{
	BITree T=NULL;//�ṹ��ָ�� 
	int choice;//ѡ������� 
	int deep=0;//��������� 
	int n=0;//Ҷ�ӽ����� 
	BITree p;//ͷ�������ӣ�ָ������ 
	while(1)
	{
		OperateMenu();
		fflush(stdin);//������ 
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				InitBITree(T);
				printf("\t ��ʼ���ɹ� \t\n");
				break;
			case 2:
				if(JudgeInit(T)==-1)//�ж��Ƿ��ʼ�� 
				{
					printf("\tδ��ʼ�������ȳ�ʼ�� \t\n");
				}
				else
				{
				    p=T->lchild;//pָ������
					printf("\t�����������ֵ��\t");
					CreatBITree(p);
					printf("\t�����ɹ��������ѡ�������\t\n");
				}
				break;
			case 3:
				if(JudgeInit(T)==-1)
				{
					printf("\tδ��ʼ�������ȳ�ʼ�� \t\n");
				}
				else
				{
					printf("\t��������Ľ��Ϊ��\t");
					LDR(p);
					printf("\n");
				}
				break;
			case 4:
				if(JudgeInit(T)==-1)
				{
					printf("\tδ��ʼ�������ȳ�ʼ�� \t\n");
				}
				else
				{
					printf("\t��������Ľ��Ϊ��\t");
					LRD(p);
					printf("\n");
				}
				break;
			case 5:
				if(JudgeInit(T)==-1)
				{
					printf("\tδ��ʼ�������ȳ�ʼ�� \t\n");
				}
				else
				{
					printf("\t��������Ľ��Ϊ��\t");
					DLR(p);
					printf("\n");
				}
				break;
			case 6:
				if(JudgeInit(T)==-1)
				{
					printf("\tδ��ʼ�������ȳ�ʼ�� \t\n");
				}
				else
				{
					LeafBITree(p,n);
					printf("\t��������Ҷ�ӽ����Ϊ��%d\t\n",n);
					printf("\n");
				}

				break;
			case 7:
				if(JudgeInit(T)==-1)
				{
					printf("\tδ��ʼ�������ȳ�ʼ�� \t\n");
				}
				else
				{
					deep = DeepBITree(p);
					printf("\t�����������Ϊ��%d\t\n",deep);
				}

				break;
			case 8:
								if(JudgeInit(T)==-1)
				{
					printf("\tδ��ʼ�������ȳ�ʼ�� \t\n");
				}
				else
				{
						ClearBITree(p) ;
				printf("\t�������Ѿ���� \t\n");
				}
				break;
			case 0:
				return 0;
			default:
				printf("\tѡ�����������ѡ��\t\n");
		}
	}

	return 0;
}