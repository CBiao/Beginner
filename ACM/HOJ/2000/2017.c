//字符串统计
#include <stdio.h>

int main()
{
	int n, i, amount;
	char a[10000];
	while(scanf("%d", &n)==1){
		while(n){
			amount = 0;
			scanf("%s", a);
			for(i=0;a[i]!='\0';i++){
			amount += a[i]>='0'&&a[i]<='9'?1:0;
			}
			n--;
			printf("%d\n", amount);
		}
	}
	return 0;
}
