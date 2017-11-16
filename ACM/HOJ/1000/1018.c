//Big Number
//对数学敏感度高
#include <stdio.h>
#include <math.h>

int main()
{
	int t, n;
	double d;
	scanf("%d", &t);
	while(t--){
        d = 1;
		scanf("%d", &n);
		while(n){
			d+=log10(n);
			n--;
		}
		printf("%d\n", (int)d);
	}
	return 0;
}









/*可能精度问题，，未解
//已修改  d未归零 可行但超时限
#include <stdio.h>

int main()
{
	int n, t;
	int d;
	double num = 1;
	scanf("%d", &t);
	while(t){
	    d = 0;
		scanf("%d", &n);
		while(n){
			num*=n;
			while(num>10){
				num/=10;
				d++;
			}
			n--;
		}
		printf("%d\n", d+1);
		t--;
	}
	return 0;
}
