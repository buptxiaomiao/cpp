/*************************************************************************
    > File Name: recur.cpp
    > Author: Miao 
    > Mail: buptwjh@outlook.com 
    > Created Time: 2016年02月19日 星期五 13时17分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

void countdown(int n);

int main()
{
	countdown(4);
	return 0;
}

void countdown(int n)//递归4-3-2-1-0-1-2-3-4
{
	cout<<"Counting down..."<<n<<endl;
	if(n>0)
		countdown(n-1);
	cout<<n<<": Kaboom!\n";

