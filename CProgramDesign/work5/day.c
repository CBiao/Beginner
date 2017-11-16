#include <stdio.h>

int  main()
{
	int day=0, leap=0;
	int y, m, d;
	printf("Please input the date in the form of xxxx-xx-xx\n");
	scanf("%d-%d-%d", &y, &m, &d);
	if((y%4==0)&& (y%100!=0) || (y%400==0)) leap = 1;
	switch(m){
		case 12:	day+=30;
		case 11:	day+=31;
		case 10:	day+=30;
		case 9:		day+=31;
		case 8:		day+=31;
		case 7:		day+=30;
		case 6:		day+=31;
		case 5:		day+=30;
		case 4:		day+=31;
		case 3:		if(leap) day+=29;
                    else day+=28;
		case 2:		day+=31;
		case 1:		day+=d;
	}
	printf("It is the %dth day in this year!",day);
}
