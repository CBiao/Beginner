// 求和
#include <stdio.h>

int main()
{
	int n, x, sum;
	scanf("%d", &n);
	sum = 0;
	if(n){
		while (n) {
			scanf("%d", &x);
			sum += x;
			n--;
		}
		printf("%d", sum);
	}
	return 0;
}
