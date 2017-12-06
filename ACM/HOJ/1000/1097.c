//A hard puzzle
#include <stdio.h>

int main()
{
	int a, b, t, r;
	while(scanf("%d %d", &a, &b)==2){
		t = r = a%10;
		b = b%4+4;
		while(b--)	t = (t*r)%10;
		printf("%d\n", t);
	}
	return 0;
}
