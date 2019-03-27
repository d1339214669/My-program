#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class String
{
public:
	////字符串指针输出会做解引用，对于空指针解引用奔溃
	////其他类型指针输出为地址
	////对于无参构造，；应申请一个字节的空间，存放'\0'
	////申请一个字节的空间，也需要用new[],析构时调用的是delete[]，要保持全局统一
	//String()
	//	:_str(new char[1])
	//{
	//	_str = '\0';
	//}
	////带参构造，需要申请和输入字符串一样大的空间
	////把输入的字符串拷贝进去
	////如果只拷贝字符串指针，释放可能会有问题：
	////1.二次释放（两个指针指向同一片空间）
	////2.如果传入的是字符串常量，析构就会崩溃（不能主动释放代码段的文字）
	//String(char* _str)
	//	:_str(str)
	//{}
	//全缺省构造函数，缺省值为""
	String(char* str = "")
		:_str(new char[strlen(str) + 1])
	{
		strcpy(_str, str);
	}
	//深拷贝：拷贝成员变量（指针）和指向的资源
	//浅拷贝：只拷贝成员变量（指针）
	//拷贝构造（深拷贝）：1.申请空间 2.拷贝内容
	/*String(const String& s)
		:_str(new char[strlen(s._str) + 1])
	{
		strcpy(_str, s._str);
	}*/
	//现代版写法：
	//自己不申请空间，不拷贝内容，通过调用构造函数（申请空间，拷贝内容），生成一个临时对象
	//通过交换指针直接获取临时对象的全部内容
	String(const String& s)
		:_str(nullptr)
	{
		String tmp(s._str);
		swap(_str, tmp._str);
	}
	//返回引用，使得可以连续赋值
	//String& operator=(const String& s)
	//{
	//	if (this != &s)
	//	{
	//		//要拷贝的字符串长度不一定和当前对象的字符串长度一致
	//		//如果直接拷贝，空间不足的时候会导致数据丢失
	//		//所以直接释放原有空间，申请一个和当前要拷贝的字符串一样大的空间
	//		//因构造函数的定义，_str至少有一个字节的空间
	//		delete[] _str;
	//		_str = new char[strlen(s._str) + 1];
	//		strcpy(_str, s._str);
	//	}
	//	return *this;
	//}
	//现代写法：代码复用，简单
	//传入参数：传值
	//内部调用拷贝构造完成赋值，并不会引发赋值运算符的无穷递归
	//传值相当于在函数栈帧中生成一个临时对象，交换指针完成赋值
	String& operator=(String s)
	{
		swap(_str, s._str);
		return *this;
	}
	const char* c_str()
	{
		return _str;
	}
	~String()
	{
		if (_str != nullptr){
			delete[] _str;
			_str = nullptr;
		}
	}
private:
	char* _str;
};