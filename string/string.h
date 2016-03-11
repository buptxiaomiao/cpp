/*************************************************************************
    > File Name: string.h
    > Author: Miao 
    > Mail: buptwjh@outlook.com 
    > Created Time: 2016年03月04日 星期五 19时31分42秒
 ************************************************************************/
#include<iostream>
using namespace std;

class String
{
private:
	char * str;
	int len;
	static int num_strings;//静态成员在cpp中初始化
	static const int CINLIM = 80;//static const能初始化
public:
	String();
/***************************************************************/
	//复制构造函数,new需要深度复制
	String(const char *); //String t("xiaomiao")
	String(const String &); //String t=t2
	~String();
	int length() const{return len;}

	//赋值运算符重载，new深度复制
	//浅复制使两个指针指向同一区域，临时对象delete，另一个指向已delete内存
	String & operator=(const String &);//t1=t2
	String & operator=(const char *);//t1="xiaomiao"

	/*[]重载*/
	char & operator[](int i);//可读写
	const char & operator[](int i) const;//只读
/**************************************************************/
	
	friend bool operator<(String &,String &);
	friend bool operator>(String &,String &);
	friend bool operator==(String &,String &);
	friend ostream & operator<<(ostream &,String &);
	friend istream & operator>>(istream &,String &);
	
	//静态成员函数
	static int HowMany();//只能调用静态成员，属于整个类String::HowMany()
};
