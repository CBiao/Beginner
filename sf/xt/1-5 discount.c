#include <stdio.h>
#define PRICE 95

int main()
{
	int n;
	double pay;
	while(scanf("%d", &n)==1){
		pay = PRICE*n;
		if(pay>=300){
			printf("%.2f\n", 0.85*pay);
		}
		else{
			printf("%.2f\n", pay);
		}
	}
	return 0;
}
