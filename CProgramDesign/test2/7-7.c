//美食节
#include <stdio.h>

int main()
{
	int n, m, a, i, max;
	while(scanf("%d %d", &n, &m)==2){
		max = 0;
		for(i=0;i<n;i++){
			scanf("%d", &a);
			max += a<m?a:m;
		}
		printf("%d\n", max);
	}
	return 0;
}
