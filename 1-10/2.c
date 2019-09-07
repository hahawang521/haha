//****************************************************//
//Name			:	2.c
//Descriptiom	:	abc+cba=1333,求正整数a,b,c的值
//Version		:	1.0
//Creator		:	haha 2019.02.23
//××××××××××××××××××××××******************************//
#include <stdio.h>
int main()
{
	int a=0,b=0,c=0;
	int sl=0;
	for(a=1;a<9;a++)
	{
		for(b=0;b<9;b++)
		{
			for(c=1;c<9;c++)
			{
				if(101*a+101*c+20*b==1333)
				{
					printf("a=%d\n",a);
					printf("b=%d\n",b);
					printf("c=%d\n",c);
					sl=sl+1;
					printf("sl=%d\n\n",sl);
				}
			}
		}
	}
	if(sl>0)
	{
		printf("solutions have %d\n",sl);
	}
	else
	{
		printf("There is no solution\n");
	}
	return 0;
}
