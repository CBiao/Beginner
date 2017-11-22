//Number Sequence
//学好数学很重要
#include <stdio.h>
int main()
{
	int a, b, n, i;
	int f[48];
	f[0] = f[1] = 1;
	while(scanf("%d %d %d", &a, &b, &n)==3&&(a||b||n)){
		for(i=2;i<48;i++)   f[i]=(a*f[i-1]+b*f[i-2])%7;
		printf("%d\n", f[(n-1)%48]);
	}
	return 0;
}




// 递归超时， n>38后运算速度超慢， 需要找规律
#include <stdio.h>

int dg(int a, int b, int n)
{
	if(n==1||n==2) return 1;
	return (a*dg(a, b, n-1)+b*dg(a, b, n-2))%7;
}

int main()
{
	int a, b, n;
	while(scanf("%d %d %d", &a, &b, &n)==3&&(a||b||n)){
		printf("%d\n", dg(a,b,n));
	}
	return 0;
}
