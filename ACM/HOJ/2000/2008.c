//数值统计

#include <stdio.h>

int main()
{
	double x;
	int n, po, ze, ne;
	while(scanf("%d", &n)==1&&n){
		po = ze = ne = 0;
		while(n){
			scanf("%lf", &x);
			if(x>0)	po++;
			else if(x==0)	ze++;
			else ne++;
		printf("%d %d %d\n", ne, ze, po);
		}
	}
	return 0;
}



/*不知道怎么回事 AW
#include <stdio.h>

int sign(double x)
{
	if(x>0) return 1;
	else if(x==0) return 0;
	else return -1;
}

int main()
{
	double x;
	int n, po, ze, ne;
	while(scanf("%d", &n)==1&&n){
		if(n<100){
			po = ze = ne = 0;
			while(n){
				scanf("%d", &x);////////%d改为%lf可ac
				switch(sign(x)){
					case 1: po++;break;
					case 0: ze++;break;
					case -1: ne++;break;
				}
				n--;
			}
			printf("%d %d %d\n", ne, ze, po);
		}
	}
	return 0;
}
