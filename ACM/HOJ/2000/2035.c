//人见人爱A^B
#include <stdio.h>

int main()
{
	int a, b, c;
	while(scanf("%d %d", &a, &b)==2&&(a||b)){
		c = 1;
		while(b--){
			c = (c*a)%1000;
 		}
		printf("%d\n", c);
	}
	return 0;
}
