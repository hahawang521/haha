//****************************************************//
//Name			:	3.c
//Descriptiom	:	200-400之间不能被3整除的数之和
//Version		:	1.0
//Creator		:	haha 2019.02.23
//××××××××××××××××××××××******************************//
#include <stdio.h>
int main()
{
	int i=0;
	int sum=0;
	for(i=200;i<=400;i++)
	{
		if(i%3!=0)
		{
			sum=sum+i;
		}
	}
	printf("sum=%d\n",sum);
	return 0;
}
