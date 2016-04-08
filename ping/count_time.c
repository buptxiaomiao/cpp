/*************************************************************************
    > File Name: count_time.c
    > Author: Miao 
    > Mail: buptwjh@outlook.com 
    > Created Time: 2016年04月08日 星期五 16时29分49秒
 ************************************************************************/
//---------count time of a process.-------
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/time.h>

//count time difference
float timediff(struct timeval *begin,struct timeval *end);
	//timeval is a struct unix biult in.
		//long int tv_sec;
		//long int tv_usec;
int main(void)
{
	struct timeval begin,end;

	gettimeofday(&begin,0);
//gettimeofday ----return sec from 1970...,save in &begin(timeval)
//0 is timezone
	printf("do something here...\n");
	sleep(1);
	gettimeofday(&end,0);

	printf("running time : %fms\n",timediff(&begin,&end));
	return 0;
}
float timediff(struct timeval *begin,struct timeval *end)
{
	int n;
	n = (end->tv_sec - begin->tv_sec)*1000000+
		(end->tv_usec - begin->tv_usec);
	return (float)(n/1000);
}
