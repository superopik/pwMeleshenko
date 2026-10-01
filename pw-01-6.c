#include <stdio.h>
#define YEAR 365
#define DAY 24
#define HOUR 3600
int main(void)
{
    int seconds=567648000;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n",seconds,seconds/HOUR
        ,seconds/HOUR/DAY,seconds/HOUR/DAY/YEAR);
    return 0;

}