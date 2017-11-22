//Lowest Common Multiple Plus
//辗转相除法先算最大公约数 AC too！！
#include <stdio.h>

int gbs(int a, int b)
{
	if(a<b)	return gbs(b, a);
	int c , d, e;
	d = a;
	e = b;
	c = d % e;
	if(!c){
        return a/e*b;
	}
	while(c!=0){
        d = e;
        e = c;
        c = d%e;
	}
	return a/e*b;
}

int main()
{
	int n;
	int a, b;
	while(scanf("%d", &n)==1){
		a = 1;
		while(n--){
			scanf("%d", &b);
			a = gbs(a, b);
		}
		printf("%d\n", a);
	}
	return 0;
}


//可能会产生大数
//先计算最大公约数，再求得最小公倍数，这里求最大公约数用穷举法
#include <stdio.h>

int gbs(int a, int b)
{
	if(a<b)	return gbs(b, a);
	int i;
	for(i=b;i>=1;i--){
        if(a%i==0&&b%i==0){
            return a/i*b;
        }
	}
	return 0;
}

int main()
{
	int n;
	int a, b;
	while(scanf("%d", &n)==1){
		a = 1;
		while(n--){
			scanf("%d", &b);
			a = gbs(a, b);
		}
		printf("%d\n", a);
	}
	return 0;
}
