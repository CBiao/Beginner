#include <stdio.h>

int main()
{
	int year;
	while(scanf("%d", &year)==1){
		if((year%4==0&&year%100!=0)||year%400==0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	return 0;
}
