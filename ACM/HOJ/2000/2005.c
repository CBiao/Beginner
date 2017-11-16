//第几天？
#include <stdio.h>

int rn(int y)
{
	if(y%400==0||(y%4==0&&y%100!=0)){
		return 1;
	}
	return 0;
}
int main()
{
	int y, m, d, day;
	while(scanf("%d/%d/%d", &y, &m, &d)==3){
		day = 0;
		switch (m) {
			case 12: day+=30;
			case 11: day+=31;
			case 10: day+=30;
			case  9: day+=31;
			case  8: day+=31;
			case  7: day+=30;
			case  6: day+=31;
			case  5: day+=30;
			case  4: day+=31;
			case  3: if(rn(y)) day+=29;else day+=28;
			case  2: day+=31;
			case  1: day+=d;
		}
		printf("%d\n", day);
	}
	return 0;
}
