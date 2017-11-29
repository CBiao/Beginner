//阿牛的EOF牛肉串
#include <stdio.h>

int main()
{
	int n, i;
	long long a[41] = {1, 3, 8};
	for(i=3;i<=40;i++){
		a[i] = 2*(a[i-1]+a[i-2]);
	}
	while(scanf("%d", &n)==1){
		printf("%lld\n", a[n]);
	}
	return 0;
}
