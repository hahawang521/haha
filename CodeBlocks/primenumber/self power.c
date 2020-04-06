#include "general.h"

extern long mi(int a,int b);
/**
* CopyRight(c)
* All Rights reserved
* Author : haha
* Date : 2020-03-24-10.59.27
* Description : b幂数 a底数
*/
long mi(int a,int b)
{
    long temp=1;
    int i;
    for(i=0;i<b;i++)
    {
        temp *=a;
    }
    return temp;
}

/**
* CopyRight(c)
* All Rights reserved
* Author : haha
* Date : 2020-03-24-10.04.22
* Description : 自幂数
*/
void selfpower(void)
{
    long num,sum=0;
    int cnt[10],i,len;


    for (num=100;num < 100000000000000;num++)
    {
        //printf("%ld\n",num);
        cnt[0] = num  % 10;
        cnt[1] = num / 10  % 10;
        cnt[2] = num / 100  % 10;
        cnt[3] = num / 1000  % 10;
        cnt[4] = num / 10000  % 10;
        cnt[5] = num / 100000  % 10;
        cnt[6] = num / 1000000  % 10;
        cnt[7] = num / 10000000  % 10;
        cnt[8] = num / 100000000  % 10;
        cnt[9] = num / 1000000000  % 10;

        for(i=9;i>1;i--)
        {
            if(cnt[i]!=0)
            {
                len=i+1;
                //printf("%d\n",len);
                break;
            }
        }

        for(i=0;i<len;i++)
        {

            sum += mi(cnt[i],len) ;
        }


        if (num == sum)
        {
            printf("%ld是自幂数\n",num);
        }
        sum = 0;
        i = 0;
    }
}




