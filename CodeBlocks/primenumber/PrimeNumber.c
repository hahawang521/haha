#include "general.h"

/***
*�ж�һ�����ǲ�������
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
*����һ������2����Ȼ��Ȼ�����С����������������ÿ10��һ��
*Data:20200323
*/
void PrintPrime(void)
{
    int num,j,cnt,max;
    cnt=0;
    max=0;
    printf("������һ������1����Ȼ�����س�������");
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
    printf("\n��������Ϊ%d\n",max);
    cnt=0;
    //�������10��������������
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
