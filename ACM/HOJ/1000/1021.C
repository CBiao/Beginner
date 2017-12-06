//Fibonacci Again
#include <stdio.h>
int a[1000000];
int main()
{
	a[0] = 7%3;
	a[1] = 11%3;
	int i, n;
	for(i=2;i<1000000;i++){
		a[i] = (a[i-1]+a[i-2])%3;
	}
	while(scanf("%d", &n)==1){
		if(n==0) printf("yes\n");
		else	printf("no\n");
	}
	return 0;
}
