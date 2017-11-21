//Max Sum

//还是超出时间限制
#include <stdio.h>

int main()
{
	int t, n, i, j, k, s, e, max;
	int a[100001];
	if(scanf("%d", &t)==1&&t>=1&&t<=20){
		for(i=1;i<=t;i++){
			if(scanf("%d", &n)&&n>=1&&n<=100000){
				for(j=1;j<=n;j++){
					scanf("%d", &a[j]);
				}
				for(j=1;j<=n;j++){
					a[0] = 0;
					for(k=j;k<=n;k++){
						if(k==1){
							a[0]=max=a[1];
							s=j;
							e=k;
						}
						else{
							a[0]+=a[k];
							if(a[0]>max){
								max = a[0];
								s = j;
								e = k;
							}
						}
					}
				}
				printf("Case %d:\n", i);
				printf("%d %d %d\n", max, s, e);
				if(i!=t){
					printf("\n");
				}
			}
		}
	}
	return 0;
}



/*超出时间限制  需要优化算法
#include <stdio.h>

int main()
{
	int t, n, i, j, k, l, s, e, max, flag;
	int a[100001];
	if(scanf("%d", &t)==1&&t>=1&&t<=20){
		for(i=1;i<=t;i++){
			if(scanf("%d", &n)&&n>=1&&n<=100000){
				for(j=1;j<=n;j++){
					scanf("%d", &a[j]);
				}
				for(j=1;j<=n;j++){
					a[0] = 0;
					for(k=j;k<=n;k++){
						if(k==1){
							max=a[0];
							s=j;
							e=k;
						}
						else{
							a[0]+=a[k];
							if(a[0]>max){
								max = a[0];
								s = j;
								e = k;
							}
						}
					}
				}
				printf("Case %d:\n", i);
				printf("%d %d %d\n", max, s, e);
				if(i!=t){
					printf("\n");
				}
			}
		}
	}
	return 0;
}
