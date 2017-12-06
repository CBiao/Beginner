//整除的尾数
#include <stdio.h>

int main()
{
	int a, b, i, la, flag;
	while(scanf("%d %d", &a, &b)==2&&(a||b)){
		la = a*100;
		flag = 1;
		for(i=0;i<=99;i++){
			if((la+i)%b==0){
				if(flag){
					printf("%02d", i);
					flag = 0;
				}
				else{
					printf(" %02d", i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
