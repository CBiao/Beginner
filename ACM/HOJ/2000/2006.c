//求奇数的乘积
#include <stdio.h>

int js(int a)
{
	if(a%2)	return 1;
	return 0;
}

int main()
{
	int n, cj, num;
	while(scanf("%d", &n)==1){
		cj = 1;
		while(n){
			scanf("%d", &num);
			if(js(num)) cj*=num;
			n--;
		}
		printf("%d\n", cj);
	}

	return 0;
}
