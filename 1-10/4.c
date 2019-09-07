//****************************************************//
//Name			:	4.c
//Descriptiom	:	输入10个数，统计非负数的个数和总和
//Version		:	1.0
//Creator		:	haha 2019.02.23
//××××××××××××××××××××××******************************//
#include <stdio.h>
int main()
{
	int i,a[10];
	int sum=0,cnt=0;
	printf("input 10 number by enter");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			cnt++;
			sum+=a[i];
		}
	}
	
	printf("cnt=%d\n",cnt);
	printf("sum=%d\n",sum);
	return 0;
}
