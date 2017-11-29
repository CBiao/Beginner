#include <stdio.h>

int main()
{
	int i, a, b, c, flag;
	int n = 0;
	while(scanf("%d %d %d", &a, &b, &c)==3){
		n++;
		flag = 1;
		for(i=10;i<=100;i++){
			if(i%3==a&&i%5==b&&i%7==c){
				printf("Case %d:%d\n", n, i);
				flag = 0;
				break;
			}
		}
		if(flag)	printf("Case %d:No answer\n", n);
	}

	return 0;
}
