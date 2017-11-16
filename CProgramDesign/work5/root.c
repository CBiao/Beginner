#include <stdio.h>
#include <math.h>

double f(double x)
{
	return x*x+x*sin(x)-5;
}

int main()
{
	double a=0, b=5, c;
	while(1)
	{
		c=(a+b)/2;
		if(fabs(f(c))<1e-5||fabs(b-a)<1e-5)
			break;
		if(f(a)*f(c)<0)
			b=c;
		else
			a=c;
	}
	printf("%lf",c);
	return 0;
}
