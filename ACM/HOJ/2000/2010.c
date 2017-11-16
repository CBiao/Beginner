//水仙花数
#include <stdio.h>

int sxh(int x)
{
	int a, b, c;
	a = x/100;
	b = x/10%10;
	c = x%10;
	if(x==a*a*a+b*b*b+c*c*c){
		return 1;
	}
	return 0;
}

int main()
{
	int m, n, i, flag;
	while(scanf("%d %d", &m, &n)==2){
        flag = 0;
		if(100<=m && m<=n && n<=999){
			for(i=m;i<=n;i++){
				if(sxh(i)){
                    if(flag) printf(" ");
                    printf("%d", i);
                    flag++;
                }
            }
            if(!flag)   printf("no");
            printf("\n");
        }
	}
	return 0;
}
