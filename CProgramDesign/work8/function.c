#include <stdio.h>

int f(double);

int main()
{
	double n;
	while(scanf("%lf", &n)==1){
		printf("%d\n", f(n));
	}
	return 0;
}

int f(double a)
{
	if(a>0) return 1;
	else if(a==0)	return 0;
	return -1;
}
