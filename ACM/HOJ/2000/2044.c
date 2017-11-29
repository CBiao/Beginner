//一只小蜜蜂...

#include <stdio.h>
int main()
{
	int n, a, b, i;
	long long c[50];
	c[0] = c[1] = 1;
	for(i=2;i<50;i++){
		c[i] = c[i-1]+c[i-2];
	}
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &a, &b);
		printf("%lld\n", c[b-a]);
	}
	return 0;
}



//TLE
#include <stdio.h>

int ways(int a, int b)
{
	if(b == a)	return 1;
	if(b == a+1)	return 1;
	return ways(a+1,b)+ways(a+2,b);
}

int main()
{
	int n, a, b;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &a, &b);
		printf("%d\n", ways(a, b));
	}
	return 0;
}
