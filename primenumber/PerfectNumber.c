#include "general.h"

/**
* CopyRight(c)
* All Rights reserved
* Author : haha
* Date : 2020-03-26-08.46.27
* Description : ������
*/
void Perfectnumber(long num)
{
    long i,j,k,sum;
    long a[256]; //�����������


    k=0;
    sum=0;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            a[k]=i;
            //printf("a[%d]=%d\n",k,a[k]);
            k++;
        }
    }
    for(j=0;j<k;j++)
    {
        sum+=a[j];
    }
    if(sum==num)
    {
        printf("\n%d��������\n",num);
        printf("%d=%d",num,a[0]);
        for(j=1;j<k;j++)
        {
            printf("+%d",a[j]);
        }
    }
}
