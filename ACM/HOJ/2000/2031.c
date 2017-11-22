//进制转换
#include <stdio.h>

int main()
{
	int n, r, na, t, i;
	int a[32];
	while(scanf("%d %d", &n, &r)==2){
        na = 0;
		if(n<0){
			na = 1;
			n = -n;
		}
		for(t=0;n!=0;t++){
			a[t] = n%r;
			n /= r;
		}
		if(na) printf("-");
		for(i=t-1;i>=0;i--){
			printf("%X", a[i]);
		}
        putchar('\n');
	}
	return 0;
}
