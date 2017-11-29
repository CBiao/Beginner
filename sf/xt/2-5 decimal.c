#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, zs, xs;
	int n = 0;
	double d;
	while(scanf("%d %d %d", &a, &b, &c)==3&&(a||b||c)){
		n++;
		d = (double)a/b;
		zs = (int)d;
		xs = (int)((d-zs)*pow(10,c)+0.5);
		printf("Case %d: %d.%d\n", n, zs, xs);
	}
	return 0;
}
