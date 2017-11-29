//亲和数
#include <stdio.h>

int judge(int a, int b)
{
	int i, sum;
	sum = 0;
	for(i=1;i<a;i++){
		if(a%i==0) sum +=i;
	}
	if(sum==b)	return 1;
	return 0;
}


int main()
{
	int m, a, b;
	scanf("%d", &m);
	while(m--){
		scanf("%d %d", &a, &b);
		if(judge(a, b)){
			if(judge(b, a)){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
