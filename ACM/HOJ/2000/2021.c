//发工资咯：）

//0 error(s), 0 warning(s) 直接AC
#include <stdio.h>

int main()
{
	int n, money, pieces;
	while(scanf("%d", &n)==1&&n<100&&n){
		pieces = 0;
		while(n){
			scanf("%d", &money);
			pieces += money/100;
			money %= 100;
			pieces += money/50;
			money %= 50;
			pieces += money/10;
			money %= 10;
			pieces += money/5;
			money %= 5;
			pieces += money/2;
			money %= 2;
			pieces += money;
			n--;
		}
		printf("%d\n", pieces);
	}
	return 0;
}
