#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Count(int a_)
{
	int count_ = 0;
	int y_ = 0;
	while (a_ > 0)
	{
		count_ += a_/2;
		if(a_%2 == 1)
			y_++;
		a_ /= 2;
	}
	if (y_ > 1)
		count_ += Count(y_);
	return count_;
}
int main()
{
	int a = 20;
	int count = a + Count(a);//Count(a) 表示a个空瓶子最后可以换的汽水瓶数
	printf("%d\n", count);
	return 0;
}