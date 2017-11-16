//最小数和最大数
#include <stdio.h>
#include <math.h>
int main()
{
	int n, x;
	int max = -pow(2, 31);
	int min = pow(2, 31)-1;
	scanf("%d", &n);
	while(n){
		scanf("%d", &x);
		max = max>x?max:x;
		min = min<x?min:x;
		n--;
	}
	printf("%d %d", min, max);
	return 0;
}
