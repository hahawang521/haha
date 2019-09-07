//****************************************************//
//Name			:	6.c
//Descriptiom	:	输入n和a，求a+aa+aaa+a..a(n个a)的和
//Version		:	1.0
//Creator		:	haha 2019.02.23
//××××××××××××××××××××××******************************//
#include <stdio.h>
int main()
{
	int i,n,a;
	long int sum=0,tmp=0;
	printf("输入n和a\n");
	scanf("%d%d",&n,&a);
	for(i=1;i<n+1;i++)
	{
		tmp=tmp+a;
		//printf("tmp=%ld\n",tmp);
		sum=sum+tmp;
		//printf("sum=%ld\n",sum);
		a=10*a;
		//printf("a=%d\n",a);
	}
	printf("sum=%ld\n",sum);
	return 0;
}
