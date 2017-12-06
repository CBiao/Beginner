#include <stdio.h>

int hw(long long n);

int main()
{
	long long n;
	while(scanf("%lld", &n)==1){
		if(hw(n))	printf("yes\n");
		else printf("no\n");
	}
	return 0;
}

int hw(long long n)
{
	long long a = n, b = 0;
	while(a){
		b = b*10+a%10;
		a /= 10;
	}
	if(b==n) return 1;
	return 0;
}
