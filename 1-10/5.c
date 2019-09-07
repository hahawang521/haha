//****************************************************//
//Name			:	5.c
//Descriptiom	:	100以内偶数之和
//Version		:	1.0
//Creator		:	haha 2019.02.23
//××××××××××××××××××××××******************************//
#include <stdio.h>
int main()
{
	int i,sum=0;
	for(i=0;i<100;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	printf("sum=%d\n",sum);
}
