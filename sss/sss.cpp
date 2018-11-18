#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//带头结点的树的建立以及操作
typedef struct BITNode
{
	char data;// 整型数据域
	struct BITNode *lchild,*rchild;//左孩子 右孩子
} BITNode,*BITree;
//二叉树初始化
void InitBITree(BITree &T)
{
	T = (BITree)malloc(sizeof(BITNode));//为头结点申请空间 
	T->data=0;
	T->lchild=NULL;
	T->rchild=NULL;
}
//建树
void CreatBITree(BITree &T)
{
	char e;//数据域的值
	fflush(stdin);//清理缓存 
	scanf("%c",&e);
	if(e=='#')
	{
		T=NULL;	//为空则输入#
	}
	else
	{
		T=(BITNode *)malloc(sizeof(BITNode));//为新结点申请空间 
		if(!T)
		{
			printf("申请空间失败！");
		}
		T->data=e;
		printf("\t输入%c左孩子的值:\t",e);
		CreatBITree(T->lchild);
		printf("\t输入%c右孩子的值:\t",e);
		CreatBITree(T->rchild);

	}
}
//判断二叉树是否初始化
int  JudgeInit(BITree &T)
{
	if(T==NULL)
	{
		return -1;//返回-1则表示未初始化 
	}
	else
	{
		return 0;//返回0则表示已经初始化 
	}
}

//先序遍历
void LRD(BITree T)
{
	if(T!=NULL)
	{
		printf(" %c ",T->data);//访问 
		LRD(T->lchild);//遍历 
		LRD(T->rchild);
		
	}
	else{
	printf("孔数");
	}
}
//中序遍历
void LDR(BITree T)
{
	if(T!=NULL)
	{
		LDR(T->lchild);//遍历 
		printf(" %c ",T->data);//访问 
		LDR(T->rchild);

	}
}
//后序遍历
void DLR(BITree T)
{
	if(T!=NULL)
	{
		
		DLR(T->lchild);
		DLR(T->rchild);//遍历 
		printf(" %c ",T->data);//访问 

	}
}
//二叉树的深度
int DeepBITree(BITree T)
{
    int deep =0;
	if(T)
	{
		int LeftDeep = DeepBITree(T->lchild);//左子树的最深深度 
		int RightDeep = DeepBITree(T->rchild);// 右子树的最深深度
		deep=(LeftDeep>=RightDeep)?LeftDeep+1:RightDeep+1;//条件运算返回deep 
	}
	return deep;
}
//二叉树的叶子结点数
void LeafBITree(BITree T,int &n)
{
	if(T)
	{
		if(T->lchild==NULL&&T->rchild==NULL)//左右孩子都为空 
			n++;
		LeafBITree(T->lchild,n);//递归判断 
		LeafBITree(T->rchild,n);
	}
}
//清空二叉树
void ClearBITree(BITree &T) 
{
	if(T!=NULL)
	{ 

		ClearBITree(T->lchild);
		ClearBITree(T->rchild);
		free(T);
	}
}
//菜单
void OperateMenu()
{
	printf("\t************************\t\n");
	printf("\t二叉树的基本操作\t\n");
	printf("\t1.二叉树的初始化\t\n");
	printf("\t2.建树\t\n");
	printf("\t3.先序遍历\t\n");
	printf("\t4.中序遍历\t\n");
	printf("\t5.后序遍历\t\n");
	printf("\t6.计算二叉树的深度\t\n");
	printf("\t7.计算二叉树的叶子结点数\t\n");
    printf("\t8.清空二叉树\t\n");
	printf("\t0.返回\t\n");
	printf("\t************************\t\n");
	printf("\t请选择要进行的操作：\t\n");
}
//主函数
int main()
{
	BITree T=NULL;//结构体指针 
	int choice;//选择操作数 
	int deep=0;//二叉树深度 
	int n=0;//叶子结点个数 
	BITree p;//头结点的左孩子，指向根结点 
	while(1)
	{
		OperateMenu();
		fflush(stdin);//清理缓存 
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				InitBITree(T);
				printf("\t 初始化成功 \t\n");
				break;
			case 2:
				if(JudgeInit(T)==-1)//判断是否初始化 
				{
					printf("\t未初始化！请先初始化 \t\n");
				}
				else
				{
				    p=T->lchild;//p指向根结点
					printf("\t请输入根结点的值：\t");
					CreatBITree(p);
					printf("\t建树成功！请继续选择操作：\t\n");
				}
				break;
			case 3:
				if(JudgeInit(T)==-1)
				{
					printf("\t未初始化！请先初始化 \t\n");
				}
				else
				{
					printf("\t先序遍历的结果为：\t");
					LDR(p);
					printf("\n");
				}
				break;
			case 4:
				if(JudgeInit(T)==-1)
				{
					printf("\t未初始化！请先初始化 \t\n");
				}
				else
				{
					printf("\t中序遍历的结果为：\t");
					LRD(p);
					printf("\n");
				}
				break;
			case 5:
				if(JudgeInit(T)==-1)
				{
					printf("\t未初始化！请先初始化 \t\n");
				}
				else
				{
					printf("\t后序遍历的结果为：\t");
					DLR(p);
					printf("\n");
				}
				break;
			case 6:
				if(JudgeInit(T)==-1)
				{
					printf("\t未初始化！请先初始化 \t\n");
				}
				else
				{
					LeafBITree(p,n);
					printf("\t二叉树的叶子结点数为：%d\t\n",n);
					printf("\n");
				}

				break;
			case 7:
				if(JudgeInit(T)==-1)
				{
					printf("\t未初始化！请先初始化 \t\n");
				}
				else
				{
					deep = DeepBITree(p);
					printf("\t二叉树的深度为：%d\t\n",deep);
				}

				break;
			case 8:
								if(JudgeInit(T)==-1)
				{
					printf("\t未初始化！请先初始化 \t\n");
				}
				else
				{
						ClearBITree(p) ;
				printf("\t二叉树已经清空 \t\n");
				}
				break;
			case 0:
				return 0;
			default:
				printf("\t选择出错，请重新选择！\t\n");
		}
	}

	return 0;
}