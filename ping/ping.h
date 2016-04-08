/*************************************************************************
    > File Name: ping.h
    > Author: Miao 
    > Mail: buptwjh@outlook.com 
    > Created Time: 2016年04月08日 星期五 16时13分19秒
 ************************************************************************/

using namespace std;

//icmp packet
struct icmp
{
	//32bit
	unsigned char type;//8bit
	unsigned char code;
	unsigned short checksum;//16bit

	unsigned short id;
	unsigned short seq;
	struct timeval timestamp;//explain later/////////////////
};
//ip packet
struct ip
{
	//32bit
	unsigned char version:4;//8bit
	unsigned char headlen:4;
	unsigned char tos;
	unsigned short len;//16bit
	//
	unsigned short id;//16bit
	unsigned short offset;//3bit biaoshi & 13bit pianyi
	//
	unsigned char ttl;
	unsigned char protocol;
	unsigned short checksum;
	//
	struct in_addr sip;//32bit ip
	//in_addr  explain later/////////////////////////////////
	//
	struct in_addr dip;//32bit ip
};

