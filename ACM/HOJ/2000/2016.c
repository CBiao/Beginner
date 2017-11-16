///数据的交换输出
#include <stdio.h>

int main()
{
	int n, i, k, a[100];
	while(scanf("%d", &n)==1 && n<100 && n){
		k=1;
		for(i=1;i<=n;i++){
			scanf("%d", &a[i]);
		}
		a[0]=a[1];
		for(i=1;i<=n;i++){
			if(a[0]>a[i]){
				a[0]=a[i];
				k=i;
			}
		}
		if(k!=1){
			a[k]=a[1];
			a[1]=a[0];
		}
		for(i=1;i<n;i++)	printf("%d ", a[i]);
		printf("%d\n", a[n]);
	}
	return 0;
}
