//偶数求和
#include <stdio.h>
int main()
{
	int n, m, i, flag;
	while (scanf("%d %d", &n, &m)==2&&n<=100) {
		flag = 1;
		for(i=1;i<=n/m;i++){
			if(flag){
				printf("%d", ((i-1)*m+1)+(i*m));
				flag = 0;
			}
			else
				printf(" %d", ((i-1)*m+1)+(i*m));
		}
		if(n%m) printf(" %d\n", n/m*m+1+n);
		else printf("\n");
	}
	return 0;
}
