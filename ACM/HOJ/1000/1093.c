//A+B for Input-Output Practice (V)
#include <stdio.h>

int main()
{
	int t, n;
	int num, sum;
	scanf("%d", &t);
	while(t){
		sum = 0;
		scanf("%d", &n);
			while(n){
				scanf("%d", &num);
				sum += num;
				n--;
			}
		printf("%d\n", sum);
		t--;
	}
	return 0;
}
