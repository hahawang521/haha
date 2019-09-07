//****************************************************//
//Name			:	12.c
//Descriptiom	:	求输入值的阶乘
//Version		:	1.0
//Creator		:	haha 2019.02.25
//××××××××××××××××××××××******************************//
#include <stdio.h>
int main (void)
{
	int i,num;
	long long int fa=1;
	printf("input a positive integer\n");
	scanf("%d",&num);
	for(i=1;i<num+1;i++)
	{
	fa = fa* i;	

	//printf("%d\n",i);
	//printf("%ld\n",fa);
	}
	printf("%lld\n",fa);
}
