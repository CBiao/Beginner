//分拆素数和
#include <stdio.h>
#include <math.h>
int issushu(int a)
{
	int i;
	for(i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}

int main()
{
	int a, i, t;
	while(scanf("%d", &a)==1&&a){
		t = 0;
		for(i=2;i<a/2;i++){
			if(issushu(i)&&issushu(a-i))	t++;
		}
		printf("%d\n", t);
	}
	return 0;
}
