//多项式求和
#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, i;
	double sum;
	scanf("%d", &m);
	while(m){
		scanf("%d", &n);
		sum = 0;
		for(i=1;i<=n;i++){
			sum+=pow(-1,i-1)/i;//double
		}
		printf("%.2lf\n", sum);
		m--;
	}
	return 0;
}
