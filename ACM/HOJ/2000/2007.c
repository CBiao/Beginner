//平方和与立方和
#include <stdio.h>

int main()
{
	int x, y, z;
	int i, p, l;
	while(scanf("%d %d", &x, &y)==2){
		p = 0;
		l = 0;
		if(x>y){
			z = x;
			x = y;
			y = z;
		}
		for(i=x;i<=y;i++){
			if(i%2){
				l+=i*i*i;
			}
			else{
				p+=i*i;
			}
		}
		printf("%d %d\n", p, l);
	}
	return 0;
}
