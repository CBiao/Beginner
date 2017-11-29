#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main()
{
	int n;
	while(scanf("%d", &n)==1){
		printf("sin:%.4f\n", sin(PI/180*n));
		printf("cos:%.4f\n", cos(PI/180*n));
	}
	return 0;
}
