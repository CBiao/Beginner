//改革春风吹满地
//向量
#include <stdio.h>
#include <math.h>

int main()
{
	int n, i;
	double s;
	int x[100], y[100];
	while(scanf("%d", &n)==1&&n){
		for(i=0;i<n;i++){
			scanf("%d%d", &x[i], &y[i]);
		}
		s = 0;
		for(i=1;i<n-1;i++){
			s += ((y[i+1]-y[0])*(x[i]-x[0])-(x[i+1]-x[0])*(y[i]-y[0]))/2.0;
		}
		printf("%.1f\n", s);
	}
	return 0;
}


//WA 凹多边形不可求
#include <stdio.h>
#include <math.h>

int main()
{
	int n, i;
	double a, b, c, p, s;
	int x[100], y[100];
	while(scanf("%d", &n)==1&&n){
		for(i=0;i<n;i++){
			scanf("%d%d", &x[i], &y[i]);
		}
		s = 0;
		for(i=1;i<n-1;i++){
			a = sqrt(pow((x[i]-x[i+1]),2)+pow((y[i]-y[i+1]),2));
			b = sqrt(pow((x[i]-x[0]),2)+pow((y[i]-y[0]),2));
			c = sqrt(pow((x[0]-x[i+1]),2)+pow((y[0]-y[i+1]),2));
			p = (a+b+c)/2;
			s += sqrt(p*(p-a)*(p-b)*(p-c));
		}
		printf("%.1f\n", s);
	}
	return 0;
}
