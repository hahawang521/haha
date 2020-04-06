#include <stdio.h>
#include <stdlib.h>

//���㵱ǰ�ǹ����ڼ���
int to_day(int y, int m, int d)
{
  int mon[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  int day = 0;
  int i;
  for(i=1; i<y; i++){
    day += (i%4==0 && i%100!=0 || i%400==0)? 366 : 365;
  }
  if(y%4==0 && y%100!=0 || y%400==0) mon[2]++;
  for(i=1; i<m; i++){
      day += mon[i];
  }
  return day + d;
}
//����Ĳ�ֵ
int diff(int y1, int m1, int d1, int y2, int m2, int d2)
{
  int a = to_day(y1, m1, d1);
  int b = to_day(y2, m2, d2);
  return b-a;
}

int main()
{
    int day,day1,time;
    int i_Buf[6];
    int untime;
    long tmp_day,tmp_time,code,incode,unlock[10];
    i_Buf[3]=1;
	i_Buf[4]=4;
	i_Buf[5]=2020;
    time=60;

    day = diff(1900,1,1,2030,4,1);
    //printf("%d\n",day);
    //for(int i =1;i<30;i++)
    {
        //for(int j=5;j<=100;j+=5)
        {

            //untime=j;
            //i_Buf[3]=i;
            day1 = diff(1900,1,1,i_Buf[5],i_Buf[4],i_Buf[3]);
            //����ע����
            tmp_day = (day1 ^ 99699)%100000;
            tmp_time = (time + i_Buf[3]) ^ 341;
            tmp_time =  (tmp_time%1000);
            code=tmp_day*1010+tmp_time;
            printf("ע����Ϊ%d\n",code);

            printf("����ע����:");
            scanf("%d",&code);
            printf("ע����Ϊ%d\n",code);

            printf("�����ټ���ʱ��:");
            scanf("%d",&time);
            printf("�ټ���ʱ��Ϊ%d\n",time);
            //���������
            unlock[0]=(code%1000)^769;                              //Դ��������
            unlock[1]=(code/1000)^99699;                            //Դ��������
            unlock[2]=(((unlock[1]+unlock[0]*3+5)^99999))%10000;    //��������--ȡ����ֵ��4λ
            unlock[3]=((unlock[2]^9647)%10000)*10000+(time^341)+2371;
            printf("������Ϊ%d\n",unlock[3]);

            printf("���������:");
            scanf("%d",&incode);
            printf("ע����Ϊ%d\n",incode);

            //��ȡ����ֵ��ǰ4λ
            unlock[4]=((incode/10000))%10000;
            //��ȡ����ֵ�ĺ�4λ
            unlock[5]=((incode%10000-2371)^341);                    //��ԭ����

            //����������ȷ
            if(unlock[2] == unlock[4])
            {

                printf("��������ȷ\n");
            }
            else
            {
                printf("���������\n");
            }
        }
    }


    while(1);

    return 0;
}
