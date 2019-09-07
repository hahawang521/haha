//****************************************************//
//Name			:	10.c
//Descriptiom	:	水仙花数--3位数，各位立方和等于自身
//Version		:	1.0
//Creator		:	haha 2019.02.25
//××××××××××××××××××××××******************************//
#include <stdio.h>
#include <math.h>
int main()
{
	int i,d1,d2,d3;
	int sum=0;
	for(i=99;i<999;i++)
	{
		d1=(i / 100) % 10;
		d2=(i / 10) % 10;
		d3=(i / 1) % 10;
		//sum=d1*d1*d1+d2*d2*d2+d3*d3*d3;
		sum=(int)pow(d1,3)+(int)pow(d2,3)+(int)pow(d3,3);
		if(sum==i)
		{
		printf("%d=%d^3+%d^3+%d^3\n",sum,d1,d2,d3);
		}
	}
	
	return 0;
}
