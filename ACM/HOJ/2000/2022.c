//海选女主角
#include <stdio.h>
#include <math.h>

int main()
{
	int a[101][101] = {0};
	int i, j, h, l, max;
	int m, n;
	while(scanf("%d %d", &m, &n)==2){
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				scanf("%d", &a[i][j]);
				if(i==1&&j==1){
					max = fabs(a[1][1]);
					j = 1;
					l = 1;
				}
				else{
					if(max<fabs(a[i][j])){
						max = fabs(a[i][j]);
						h = i;
						l = j;
					}
				}
			}
		}
		printf("%d %d %d\n", h, l, a[h][l]);
	}
	return 0;
}
