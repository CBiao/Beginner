//Climbing Worm
#include <stdio.h>
int main()
{
	int n, u, d, t, k;
	while(scanf("%d %d %d", &n, &u, &d)==3&&n){
		t = k = 0;
		t += u;
		k++;
		while(n>t){
			t = t - d +u;
			k += 2;
		}
		printf("%d\n", k);
	}
	return 0;
}
