#include <stdio.h>

int main()
{
	double a, b, c;
	double s, area;
	printf("Please input a b c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	if(a+b>c && a+c>b && b+c>a)
	{
			s = (a+b+c)/2;
			area = sqrt(s*(s-a)*(s-b)*(s-c));
			printf("The triangle's area is %.2f.\n", area);
	}
	else
	{
		printf("a,b,c can not form a .\n");
	}
	return 0;
}
