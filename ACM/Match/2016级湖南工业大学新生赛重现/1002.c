//我的旭公举不可能会算数
//WA
#include <stdio.h>
int main()
{
	int n, k, i, j, t, head, tail;
	int a[150];
	while(scanf("%d %d", &n, &k)==2&&n>=2&&n<=150&&k<=300){
		for(i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<=n-i-1;j++){
				if(a[j]>a[j+1]){
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				}
			}
		}
		head = tail = -1;
		for(i=0;i<n;i++){
			for(j=n-1;j>i;j--){
				if(a[i]+a[j]==k){
					head = i;
					tail = j;
				}
			}
		}
		if(head==-1){
			printf("-1\n");
		}
		else{
			printf("%d %d\n", head+1, tail+1);
		}
	}
	return 0;
}
