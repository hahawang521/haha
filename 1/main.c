#include<stdio.h>

int main()
{
    int n,i,j;
    printf("ÊäÈëÐÐÊýn,(n>=2)\n");
    scanf("%d",n);
    int num[20][20];
    if(n>=2)
    {
        num[0][0]=1;
        for(i=1;i<n;i++)
        {
            num[i][0]=num[i][i-1]=1;
            for(j=1;j<i;j++)
            {
                num[i][j]=num[i-1][j-1]+num[i-1][j];

            }

        }
        for(i=0;i<n;i++)
        {
            for(j=1;j<i;j++)
            {
                printf("%d",num[i][j]);
            }
        }
    }
    else
    {
        printf("n<2");
    }
}
