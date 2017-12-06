//Bitset
#include <stdio.h>

int main()
{
	int n, a[10], t;
	while(scanf("%d", &n)==1){
		t = 0;
		while(n){
			a[t++] = n%2;
			n /=2;
		}
		for(n=t-1; n>=0;n--){
			printf("%d", a[n]);
		}
		printf("\n");
	}
	return 0;
}
