/*************************************************************************
    > File Name: string_ip.cpp
    > Author: Miao 
    > Mail: buptwjh@outlook.com 
    > Created Time: 2016年04月08日 星期五 16时49分21秒
 ************************************************************************/

#include<iostream>
#include<arpa/inet.h>
using namespace std;

	//inet_addr()---trans string_ip to int32_ip
	//inet_ntoa()---reversed.
int main(void)
{
	char addr1[] = "1.2.3.4";
	char addr2[] = "127.0.0.1";
	int a1 = 12346;
	int a2 = 654321;
	
	in_addr_t data;
	data = inet_addr(addr1);
	cout<<"addr1: "<<data<<endl;
	data = inet_addr(addr2);
	cout<<"addr2: "<<data<<endl;


	data = inet_ntoa(a1)
	
	return 0;
}
