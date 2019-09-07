//****************************************************//
//Name			:	13.c
//Descriptiom	:	编写程序,判断从键盘输入的字符中数字字符的个数、大写字母的个数、小写字母的个数，其他字符的个数，以×为结束符
//Version		:	1.0
//Creator		:	haha 2019.02.25
//××××××××××××××××××××××******************************//
#include <stdio.h>
#include <string.h>
int main()
{
	char chr[50];
	int i,cnt,m=0,n=0,k=0,j=0;
	printf("Input String\n");
	fgets(chr,50,stdin);
	cnt=strlen(chr);
	for(i=0;i<cnt;i++)
	{
		if(chr[i]=='*')
		{
		break;
		}
		else if(chr[i]>='a' && chr[i]<='z')
		{
		m++;
		}
		else if(chr[i]>='A' && chr[i]<='Z')
		{
		n++;
		}
		else if(chr[i]>='0' && chr[i]<='9')
		{
		k++;
		}
		else
		{
		j++;
		}
		
	}
	printf("UPPER=%d\n",m);
	printf("LOWWER=%d\n",n);
	printf("NUMBER=%d\n",k);
	printf("OTHER=%d\n",j);
	printf("\n");
	return 0;
}
