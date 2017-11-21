//求平均成绩
#include <stdio.h>

int main()
{
	int n, m, i, j, sum, overave, flag;
	int a[50][5];
	double b[50], c[5];
	while(scanf("%d %d", &n, &m)==2&&n<=50&&m<=5){
		overave = 0;
		for(i=0;i<n;i++){
			sum = 0;
			for(j=0;j<m;j++){
				scanf("%d", &a[i][j]);
				sum += a[i][j];
			}
			b[i] = (double)sum/m;
		}
		for(i=0;i<m;i++){
			sum = 0;
			for(j=0;j<n;j++){
				sum += a[j][i];
			}
			c[i] = (double)sum/n;
		}
		for(i=0;i<n;i++){
			flag = 1;
			for(j=0;j<m;j++){
				if(a[i][j]>=c[j]){
					flag*=flag;
				}
				else{
					flag*=0;
				}
			}
			if(flag)    overave++;
		}
		for(i=0;i<n;i++){
			if(!i){
				printf("%.2f", b[i]);
			}
			else{
				printf(" %.2f", b[i]);
			}
		}
		putchar('\n');
		for(i=0;i<m;i++){
			if(!i){
				printf("%.2f", c[i]);
			}
			else{
				printf(" %.2f", c[i]);
			}
		}
		putchar('\n');
		printf("%d\n\n", overave);
	}
	return 0;
}
