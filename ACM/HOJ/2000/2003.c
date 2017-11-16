//求绝对值
#include <stdio.h>

int main()
{
	double a;
	while(scanf("%lf", &a)==1){
		if(a>=0)	printf("%.2lf\n", a);
		printf("%.2lf\n", -a);
	}
	return 0;
}
