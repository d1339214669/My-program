#define _CRT_SECURE_NO_WARNINGS 1
/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个 
嫌疑犯的一个。以下为4个嫌疑犯的供词。 
A说：不是我。 
B说：是C。 
C说：是D。 
D说：C在胡说 
已知3个人说了真话，1个人说的是假话。 
现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	for (a=0; a<=1; a++)//1表示是嫌犯，0表示不是嫌犯
		for (b=0; b<=1; b++)
	        for (c=0; c<=1; c++)
			    for (d=0; d<=1; d++)
					if((0==a)+(1==c)+(1==d)+(0==d)==3)
						if(1==a+b+c+d)
						    printf("a=%d,b=%d,c=%d,d=%d(1表示是嫌犯，0表示不是嫌犯)\n", a, b, c, d);

	return 0;
}