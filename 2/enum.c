#include <stdio.h>
enum DAY
{
mon=1,tue,wed,thu,fri,sat,sun
}day;
int main()
{
enum DAY day;
day =wed;
printf("%d",day);
return 0;
}

