//****************************************************//
//Name			:	11.c
//Descriptiom	:	皮球100米落下，每次反弹只有一半，求10次后经过总距离
//Version		:	1.0
//Creator		:	haha 2019.02.25
//××××××××××××××××××××××******************************//
#include <stdio.h>
int main (void)
{
	int i,len,sum=0;
	len=100;
	for(i=0;i<10;i++)
	{
		sum += len;
		len /=2;
	}
	printf("%d\n",sum);
}
