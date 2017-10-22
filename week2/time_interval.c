#include <stdio.h>
#include <math.h>

int main()
{
    int time_interval, time1, time2;
    int hour, hour1, hour2;
    int minute, minute1, minute2;
    int second, second1, second2;
    printf("Please enter a time in the form of \"XX:XX:XX\"\n");
    scanf("%d:%d:%d", &hour1, &minute1, &second1);
    time1 = 3600*hour1+60*minute1+second1;
    printf("Please enter another time in the form of \"XX:XX:XX\"\n");
    scanf("%d:%d:%d", &hour2, &minute2, &second2);
    time2 = 3600*hour2+60*minute2+second2;
    time_interval = fabs(time1-time2);
    hour = time_interval/3600;
    minute = (time_interval-hour*3600)/60;
    second = time_interval-hour*3600-minute*60;
    printf("The time interval is \n%02d:%02d:%02d\n", hour, minute, second);
    return 0;
}
