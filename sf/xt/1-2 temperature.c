#include <stdio.h>
int main()
{
	double f;
	while(scanf("%lf", &f)){
		printf("%.3f\n", (f-32)*5/9);
	}
	return 0;
}
