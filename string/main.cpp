/*************************************************************************
    > File Name: main.cpp
    > Author: Miao 
    > Mail: buptwjh@outlook.com 
    > Created Time: 2016年03月05日 星期六 01时45分11秒
 ************************************************************************/

#include"string.h"
using namespace std;

const int Arsize=10;
const int MaxLen=81;

int main()
{
	String name;
	cout<<"Hi ,what's your name?\n";
	cin>>name;
	
	cout<<name<<",please enter up to"<<Arsize
			<<"short sayings.<empty line to quit.>"<<endl;
	String sayings[Arsize];
	//临时存储
	char temp[MaxLen];
	int i;
/**************************************************************/
	//输入
	for(i=0;i<Arsize;i++)
	{
		cout<<i+1<<":";
		cin.get(temp,MaxLen);
		while(cin && cin.get()!='\n')
			continue;
		if(!cin || temp[0]=='\0')
			break;
		else 
			sayings[i]=temp;
	}
/**************************************************************/

	int total=i;
	if(total>0)
	{
		cout<<"Here are your sayings:"<<endl;
		for(int i=0;i<total;i++)
			cout<<sayings[i][0]<<":"<<sayings[i]<<endl;
		int shortest=0;
		int first=0;
		//找shortest和first	
		for(int i=0;i<total;i++)
		{
			if (sayings[i].length()<sayings[shortest].length())
				shortest = i;
			if	(sayings[i]<sayings[first])
				first = i;
		}
	cout<<"Shortest sayings:"<<endl<<sayings[shortest]<<endl;
	cout<<"First alphabetically:"<<endl<<sayings[first]<<endl;
	cout<<"This program used "<<String::HowMany()<<"String object.\n";
	}
	else 
		cout<<"No input!Bye.\n";
	return 0;
}
