//超级楼梯
#include <stdio.h>

int main()
{
	int a[41], i, n, m;
	a[1] = a[2] = 1;
	for(i=3;i<=40;i++){
		a[i] = a[i-1]+a[i-2];
	}
	scanf("%d", &n);
	while(n--){
		scanf("%d", &m);
		printf("%d\n", a[m]);
	}
	return 0;
}


//最多三十几， 会溢出
// #include <stdio.h>
//
// unsigned long long fact(unsigned long long a)
// {
// 	unsigned long long f = 1;
// 	while(a){
// 		f *= a;
// 		a--;
// 	}
// 	return f;
// }
//
// int main()
// {
// 	int n, m, i;
// 	unsigned long long steps;
// 	scanf("%d", &n);
// 	while(n--){
//         steps = 0;
// 		scanf("%d", &m);
// 		m--;
// 		for(i=0;i<=m/2;i++){
// 			steps += fact(m-i)/fact(i)/fact(m-2*i);
// 		}
// 		printf("%lld\n", steps);
// 	}
// 	return 0;
// }
