//Least Common Multiple
#include <stdio.h>
int lcm(int m, int n);
int main()
{
	int n, m, l, mn;
	scanf("%d", &n);
	while(n--){
		l = 1;
		scanf("%d", &m);
		while(m--){
			scanf("%d", &mn);
			l = lcm(mn, l);
		}
		printf("%d\n", l);
	}
	return 0;
}

int lcm(int m, int n)
{
	int a = m, b = n, c;
	while(b){
		c = a%b;
		a = b;
		b = c;
	}
	return m/a*n;
}
