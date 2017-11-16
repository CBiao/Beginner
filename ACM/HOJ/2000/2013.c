//蟠桃记
#include <stdio.h>

int main()
{
	int n, sum;
	while (scanf("%d", &n) == 1 && n>1 && n<30) {
		sum = 1;
		while (n - 1) {
			sum = 2*(sum + 1);
			n--;
		}
		printf("%d\n", sum);
	}
	return 0;
}
