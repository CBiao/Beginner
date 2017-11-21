//Financial Management
#include <stdio.h>

int main()
{
	int i;
	double sum = 0, money;
	for(i=0; i<12;i++){
		scanf("%lf", &money);
		sum += money;
	}
	printf("$%.2f\n", sum/12);
	return 0;
}
