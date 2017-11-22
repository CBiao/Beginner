//杨辉三角
#include <stdio.h>

int main()
{
	int n, i, j;
	int a[31][31];
	a[1][1] = 1;
	for(i=2;i<31;i++){
		a[i][1] = 1;
		for(j=2;j<i;j++){
			a[i][j] = a[i-1][j-1]+a[i-1][j];
		}
		a[i][i] = 1;
	}
	while(scanf("%d", &n)==1){
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				if(j!=1) printf(" ");
				printf("%d", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}



//WA
#include <stdio.h>

int main()
{
	int n, i, j;
	int a[30] = {1};
	while(scanf("%d", &n)==1){
		for(i=1;i<=n;i++){
      a[i] = 1;
			for(j=i-2;j>0;j--){
				a[j] += a[j-1];
			}
			for(j=0;j<i;j++){
			    if(j) printf(" ");
				printf("%d",a[j]);
			}
			putchar('\n');
		}
		putchar('\n');
	}
	return 0;
}
