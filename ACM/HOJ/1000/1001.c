//Sum Problem
#include <stdio.h>

int fact(int n)
{
	int f=0;
	while(n){
		f+=n;
		n--;
	}
	return f;
}

int main()
{
	int n;
	while(scanf("%d", &n)==1){
		printf("%d\n\n", fact(n));
	}
	return 0;
}
