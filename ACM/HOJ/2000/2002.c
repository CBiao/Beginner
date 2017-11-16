//计算球体积
#define PI 3.1415927
#include <stdio.h>
#include <math.h>
int main()
{
	double r;
	while(scanf("%lf", &r)==1){
		printf("%.3lf\n", (4/3.0)*PI*pow(r,3));
		getchar();
	}
	return 0;
}
//未包含头文件也会AW；
