#include "general.h"

/**
* CopyRight(c)
* All Rights reserved
* Author : haha
* Date : 2020-03-24-12.54.25
* Description : �����ֽ�
*/
void Factorization(void)
{
    long x,i=2,n;

    printf("������һ����Ȼ��:");
    scanf("%ld",&x);
    printf("%ld=",x);
    n=x;

    for(i=2;i<n;i++)
    {
        while ( x % i == 0 )
        {
            x /= i;
            printf("%d",i);
            if(x!=1)
            {
                printf("*");
            }
        }

    }

    if(x==n)
    {
        printf("\b��������");
    }
}
