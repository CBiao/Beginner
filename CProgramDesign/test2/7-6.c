//平均数和标准差
#include <stdio.h>
#include <math.h>
int main()
{
	int a[5], i, t;
	double ave, sm;
	scanf("%d", &t);
	while(t--){
		ave = sm = 0;
		for(i=0;i<5;i++){
			scanf("%d", &a[i]);
			ave += (double)a[i]/5;
		}
		for(i=0;i<5;i++){
			sm += (a[i]-ave)*(a[i]-ave);
		}
		sm = sqrt(sm/5);
		printf("%.3f %.3f\n", ave, sm);
	}
	return 0;
}
