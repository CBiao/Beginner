//A Mathematical Curiosity
#include <stdio.h>
#include <math.h>
int isinteger(int a, int b, int m)
{
	if(fabs((a*a+b*b+m)/(double)(a*b)-(a*a+b*b+m)/(a*b))<1e-8)	return 1;
	return 0;
}

int main()
{
	int N, n, m, c, t, i, j;
	scanf("%d", &N);
	getchar();
	while(N--){
		getchar();
		c = 0;
		while(scanf("%d %d", &n, &m)==2&&(n||m)){
			t = 0;
			for(i=1;i<n-1;i++){
				for(j=i+1;j<n;j++){
					if(isinteger(i, j, m)) t++;
				}
			}
			printf("Case %d: %d\n", ++c, t);
			getchar();
		}
		if(N) printf("\n");
		getchar();
	}
	return 0;
}
