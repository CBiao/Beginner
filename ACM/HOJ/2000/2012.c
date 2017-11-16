//素数判定
#include <stdio.h>
#include <math.h>

int ss(int a)
{
	int i;
	for(i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

int main()
{
	int x, y, n, flag;
	while(scanf("%d %d", &x, &y)==2&&(x>=-39&&y>x&&y<=50)){
		flag = 1;
		for(n=x;n<=y;n++){
			flag*=ss(n*n+n+41);
		}
		if(flag) printf("OK\n");
		else printf("Sorry\n");
	}
	return 0;
}
