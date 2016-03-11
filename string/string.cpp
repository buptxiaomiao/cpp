 /************************************************************************
    > File Name: string.cpp
    > Author: Miao 
    > Mail: buptwjh@outlook.com 
    > Created Time: 2016年03月04日 星期五 19时42分32秒
 ************************************************************************/

#include<cstring>
#include "string.h"
using namespace std;

int String::num_strings=0;//静态成员在cpp初始化
//静态函数只能调用静态成员
int String::HowMany()
{
	return String::num_strings;
}
//构造
String::String()
{
	len=0;
	str=new char[len+1];
	/*str=NULL也可*/
//new-delete new[]-delete[]
	str='\0';
	num_strings++;
}
String::String(const char* s)
{
	len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
	num_strings++;
}
String::String(const String &t)
{
	len=t.len;
	str=new char[len+1];
	strcpy(str,t.str);
	num_strings++;
}
//析构
String::~String()
{
	delete [] str;
}
//=运算符重载
String & String::operator=(const String &t)
{
	if(this==&t)
		return *this;
	delete [] str;
	len=t.len;
	str=new char[len+1];
	strcpy(str,t.str);
	num_strings++;
	return *this;
}
String & String::operator=(const char *s)
{
	delete [] str;
	len=strlen(s);
	str=new char[len+1];
	strcpy(str,s);
	num_strings++;
	return *this;	
}
//[]重载
char & String::operator[](int i)
{
	return *(str+i);
}
const char & String::operator[](int i) const
{
	return *(str+i);
}
//比较
bool operator<(String &t1,String &t2)
{
	return(strcmp(t1.str,t2.str)<0);
}
bool operator>(String &t1,String &t2)
{
	return t2<t1;
}
bool operator==(String &t1,String &t2)
{
	return (strcmp(t1.str,t2.str)==0);
}
//io重载
ostream & operator<<(ostream &os,String &t)
{
	os<<t.str;
	return os;
}
istream & operator>>(istream &is,String &t)
{
	char temp[String::CINLIM];
	is.get(temp,String::CINLIM);
	//如果有输入
	if(is)
		t=temp;
	while(is && is.get()!='\n')
		continue;
	return is;
	/*
	char temp[String::CINLIM];
	is.get(temp,String::CINLIM);
	while(!cin||temp=='\0')
		continue;
	t.len=strlen(temp);
	delete [] t.str;
	t.str=new char[t.len+1];
	strcpy(t.str,temp);
	return is;
	*/
}
