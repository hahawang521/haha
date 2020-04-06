#include "general.h"

/**
* CopyRight(c)
* All Rights reserved
* Author : haha
* Date : 2020-03-24-08.39.23
* Description : 9X9 口诀表
*/
void ninenine(void)
{
    int i,j;

    for (i=1;i<10;i++)
    {
        for (j=1;j<10;j++)
        {
            printf("%.2dX%.2d=%.2d  ",i,j,i*j);
        }
        printf("\n");
    }
}
