#include <stdio.h>

int main()
{
	int n, i, j;
	while(scanf("%d", &n)==1&&n<=20){
		for(i=1;i<=n;i++){
			for(j=0;j<i;j++){
				printf("  ");
			}
			for(j=1;j<=2*(n-i)+1;j++){
				printf("# ");
			}
			printf("\n\n");
		}
	}
	return 0;
}
