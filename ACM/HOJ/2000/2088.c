//Box of Bricks
#include <stdio.h>
#include <math.h>
int main()
{
	int n, sum, i, ave, move;
	int hi[50];
	int flag = 0;
	while(scanf("%d", &n)==1&&n){
		sum = move = 0;
		for(i=0;i<n;i++){
			scanf("%d", &hi[i]);
			sum += hi[i];
		}
		ave = sum/n;
		for(i=0;i<n;i++){
			move += fabs(ave - hi[i]);
		}
		if(flag)	putchar('\n');
		printf("%d\n", move/2);
		flag = 1;
	}
	return 0;
}
