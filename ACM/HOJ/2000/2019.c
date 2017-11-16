//数列有序!
#include <stdio.h>

int main()
{
	int m ,n, i, flag, num, sign;
	while(scanf("%d %d", &n, &m)==2&&!(n==0&&m==0)&&n<=100){
		flag = 1;
		sign = 1;
		while(n){
			scanf("%d", &num);
			if(sign){
				if(m<num){
					printf("%d", m);
					flag = 1;
				}
				printf("%d", num);
				sign = 0;
			}
			else{
				if(m<num&&flag){
					printf(" %d", m);
					flag = 0;
				}
				printf(" %d", num);
			}
			n--;
		}
		if(flag)
			printf(" %d\n", m);
		else
			printf("\n");
	}
	return 0;
}
