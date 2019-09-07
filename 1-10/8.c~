//****************************************************//
//Name			:	7.c
//Descriptiom	:	将输入字符串中的a替换为×，输出
//Version		:	1.0
//Creator		:	haha 2019.02.25
//××××××××××××××××××××××******************************//
#include <stdio.h>
#include <string.h>
int main()
{
	char chr[50];
	int i,n;
	printf("Input String\n");
	fgets(chr,50,stdin);
	n=strlen(chr);
	for(i=0;i<n;i++)
	{
	if(chr[i]=='a')
	{
	chr[i]='*';
	}
	if(chr[i]>='a' && chr[i]<='z')
	{
	chr[i]=chr[i]+'A'-'a';
	}
	printf("%c",chr[i]);
	}
	printf("\n");
	return 0;
}
