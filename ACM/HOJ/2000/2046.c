//骨牌铺方格
#include <stdio.h>

int main()
{
	int n, i;
	long long a[51];
	a[1] = 1;
	a[2] = 2;
	for(i=3;i<=50;i++){
		a[i] = a[i-1]+a[i-2];
	}
	while(scanf("%d", &n)==1){
		printf("%lld\n", a[n]);
	}
	return 0;
}
