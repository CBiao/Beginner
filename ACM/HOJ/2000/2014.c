//青年歌手大奖赛_评委会打分
#include <stdio.h>

int main()
{
	int n, max, min, score, sum, i;
	while(scanf("%d",&n)==1&&n>2&&n<=100){
		max = 0;
		min = 100;
		sum = 0;
		for(i=1;i<=n;i++){
			scanf("%d", &score);
			sum+=score;
			min=min<score?min:score;
			max=max>score?max:score;
		}
		printf("%.2lf\n", (double)(sum-max-min)/(n-2));
	}
	return 0;
}
