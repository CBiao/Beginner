//Switch Game
#include <stdio.h>

int main()
{
	int lamp, n, i;
	while(scanf("%d", &n)==1&&n>0){
		lamp = 0;
		for(i=1;i<=n;i++){
			if(n%i==0) lamp = !lamp;
		}
		printf("%d\n", lamp);
	}
	return 0;
}
