//不容易系列之(3)—— LELE的RPG难题
#include <stdio.h>

int main()
{
	int n, i;
	long long a[51];
	a[1] = 3;
	a[2] = 6;
	a[3] = 6;
	for(i=4;i<=50;i++){
		a[i] = a[i-1] + 2*[i-2];
	}
	while(scanf("%d",&n )==1&&n>0&&n<=50){
		printf("%lld\n", a[n]);
	}
	return 0;
}
