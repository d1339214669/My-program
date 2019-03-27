#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class String
{
public:
	////�ַ���ָ��������������ã����ڿ�ָ������ñ���
	////��������ָ�����Ϊ��ַ
	////�����޲ι��죬��Ӧ����һ���ֽڵĿռ䣬���'\0'
	////����һ���ֽڵĿռ䣬Ҳ��Ҫ��new[],����ʱ���õ���delete[]��Ҫ����ȫ��ͳһ
	//String()
	//	:_str(new char[1])
	//{
	//	_str = '\0';
	//}
	////���ι��죬��Ҫ����������ַ���һ����Ŀռ�
	////��������ַ���������ȥ
	////���ֻ�����ַ���ָ�룬�ͷſ��ܻ������⣺
	////1.�����ͷţ�����ָ��ָ��ͬһƬ�ռ䣩
	////2.�����������ַ��������������ͻ���������������ͷŴ���ε����֣�
	//String(char* _str)
	//	:_str(str)
	//{}
	//ȫȱʡ���캯����ȱʡֵΪ""
	String(char* str = "")
		:_str(new char[strlen(str) + 1])
	{
		strcpy(_str, str);
	}
	//�����������Ա������ָ�룩��ָ�����Դ
	//ǳ������ֻ������Ա������ָ�룩
	//�������죨�������1.����ռ� 2.��������
	/*String(const String& s)
		:_str(new char[strlen(s._str) + 1])
	{
		strcpy(_str, s._str);
	}*/
	//�ִ���д����
	//�Լ�������ռ䣬���������ݣ�ͨ�����ù��캯��������ռ䣬�������ݣ�������һ����ʱ����
	//ͨ������ָ��ֱ�ӻ�ȡ��ʱ�����ȫ������
	String(const String& s)
		:_str(nullptr)
	{
		String tmp(s._str);
		swap(_str, tmp._str);
	}
	//�������ã�ʹ�ÿ���������ֵ
	//String& operator=(const String& s)
	//{
	//	if (this != &s)
	//	{
	//		//Ҫ�������ַ������Ȳ�һ���͵�ǰ������ַ�������һ��
	//		//���ֱ�ӿ������ռ䲻���ʱ��ᵼ�����ݶ�ʧ
	//		//����ֱ���ͷ�ԭ�пռ䣬����һ���͵�ǰҪ�������ַ���һ����Ŀռ�
	//		//���캯���Ķ��壬_str������һ���ֽڵĿռ�
	//		delete[] _str;
	//		_str = new char[strlen(s._str) + 1];
	//		strcpy(_str, s._str);
	//	}
	//	return *this;
	//}
	//�ִ�д�������븴�ã���
	//�����������ֵ
	//�ڲ����ÿ���������ɸ�ֵ��������������ֵ�����������ݹ�
	//��ֵ�൱���ں���ջ֡������һ����ʱ���󣬽���ָ����ɸ�ֵ
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