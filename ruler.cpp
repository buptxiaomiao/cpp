/*************************************************************************
    > File Name: ruler.cpp
    > Author: Miao 
    > Mail: buptwjh@outlook.com 
    > Created Time: 2016年02月19日 星期五 13时26分26秒
 ************************************************************************/

#include<iostream>
using namespace std;

const int LEN=66;
const int DIVS=6;
void subdivide(char * ,int ,int , int);

int main()
{
	char str[LEN+1];
	for(int i=0;i<LEN+1;i++)	
		str[i]=' ';
	str[0]='|';
	str[LEN-1]='|';
	for (int i=0;i<DIVS;i++)	
	{
		subdivide(str,0,LEN,i);
		cout<<str<<endl;
		for(int j=1;j<LEN-1;j++)
			str[j]=' ';
	}
}
void subdivide(char* ar ,int low,int high,int level)
{
	if(level==0)		
		return ;
	int mid=(high+low)/2;
	ar[mid]='|';
	subdivide(ar,low,mid,level-1);
	subdivide(ar,mid,high,level-1);
}
