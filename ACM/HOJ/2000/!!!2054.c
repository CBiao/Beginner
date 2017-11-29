//A == B ?
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b;
	while(scanf("%lf %lf", &a, &b)==2){
		if(fabs(a-b)<1e-14){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
