//求数列的和
#include <stdio.h>
#include <math.h>
int main()
{
	double n, sum;
	int m;
	while(scanf("%lf %d", &n, &m)==2){
		sum = 0;
		while(m){
			sum += n;
			n = sqrt(n);
			m--;
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}
