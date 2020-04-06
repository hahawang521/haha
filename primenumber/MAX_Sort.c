#include "general.h"

/**
* CopyRight(c)
* All Rights reserved
* Author : haha
* Date : 2020-03-23-16.14.54
* Description :输入3个数，从小到大排列
*/
void Max_sort(void)
{
    int temp[3];
    int x,y,z,t;

    printf("请输入3个自然数以空格隔开\n");
    scanf("%d %d %d,",&temp[0],&temp[1],&temp[2]);
    x = temp[0];
    y = temp[1];
    z = temp[2];
    if ( x > y )
    {
        t = x;
        x = y;
        y = t;
    }
    if ( x > z)
    {
        t = x;
        x = z;
        z = t;
    }
    if ( y > z)
    {
        t = y;
        y = z;
        z = t;
    }
    printf("%d %d %d\n",temp[0],temp[1],temp[2]);
    printf("x=%d\ny=%d\nz=%d\n",x,y,z);
}
