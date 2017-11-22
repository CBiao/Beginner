//Box of Bricks
#include <stdio.h>
#include <math.h>
int main()
{
	int n, sum, i, ave, move, time;
	int hi[50];
	time = 0;
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
		time++;
		printf("Set #%d\n", time);
		printf("The minimum number of moves is %d.\n\n", move/2);
	}
	return 0;
}
