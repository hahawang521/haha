//****************************************************//
//Name			:	1.c
//Descriptiom	:	求输入数以内能被17整除的最大的数
//Version		:	1.0
//Creator		:	haha 2019.02.23
//××××××××××××××××××××××******************************//
#include <stdio.h>
int main()
{
	int input_num=0;
	int i,num_max;
	printf("input a number\n");
	scanf("%d",&input_num);
	for(i=input_num;i>0;i--)
	{
		if(i%17==0)
		{
			num_max=i;
			break;
		}
	}
	printf("num_max=%d\n",num_max);
}
