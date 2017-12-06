//Elevator
#include <stdio.h>
int ts(int a, int b)
{
	if(a==b) return 5;
	else if(a>b){
		return (a-b)*4+5;
	}
	else return (b-a)*6+5;
}


int main()
{
	int n, m, f, t;
	while(scanf("%d", &n)==1&&n){
		f = t = 0;
		while(n--){
			scanf("%d", &m);
			t += ts(f, m);
			f = m;
		}
		printf("%d\n", t);
	}
	return 0;
}
