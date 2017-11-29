//不容易系列之二
#include <stdio.h>

int main()
{
	int n, a, i;
	long long y[31];
	y[0] = 3;
	for(i=1;i<=30;i++){
		y[i] = (y[i-1]-1)*2;
	}
	scanf("%d", &n);
	while(n--){
		scanf("%d", &a);
		printf("%d\n", y[a]);
	}
	return 0;
}
