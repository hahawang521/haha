#include "general.h"

/***
*判断一个数是不是素数
*Data:20200323
*/
int isPnumber(int n)
{
    int i;
    for(i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

/***
*输入一个大于2的自然数然后输出小于它的所有素数，每10个一行
*Data:20200323
*/
void PrintPrime(void)
{
    int num,j,cnt,max;
    cnt=0;
    max=0;
    printf("请输入一个大于1的自然数并回车结束：");
    scanf("%d",&num);
    for(j=2;j<=num;j++)
    {
        if(isPnumber(j))
        {
            printf("%.3d ",j);
            cnt++;
            max++;
            if(cnt>9)
            {
                printf("\n");
                cnt=0;
            }
        }
    }
    printf("\n素数总数为%d\n",max);
    cnt=0;
    //额外输出10个大于它的素数
    for(j=num;;j++)
    {
        if(isPnumber(j))
        {
            printf("%.3d ",j);
            cnt++;
            if(cnt>=10)
            {
                break;
            }
        }
    }
}
