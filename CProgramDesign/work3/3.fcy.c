#include <stdio.h>

int main()
{
	double x, y;
	scanf("%lf",&x);
	if(x>=0&x<=8) 
	{
		y = x+2*x*x+10;
	} 
	else
	{
		y = x-3*x*x-11;
	}
	printf("%lf\n",y);
}
