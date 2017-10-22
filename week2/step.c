#include <stdio.h>

int main()
{
	int i;
	int way, total_way = 0;
    int totalstep, totalstep_time;
    int onestep_time, twostep_time = 0;
    printf("Please input the number of the step(s)\n");
    scanf("%d", &totalstep);
    int twostep_time_max = totalstep/2;
    int n = 1, m = 1, n_m = 1 ;
    while(twostep_time<=twostep_time_max)
    {
    	onestep_time = totalstep-twostep_time*2;
    	totalstep_time= onestep_time+twostep_time;
    	for(i=0; i<totalstep_time; i++)
    	{
    		n = n*(i+1);
		}
		for(i=0; i<onestep_time; i++)
    	{
    		m = m*(i+1);
		}
		for(i=0; i<twostep_time; i++)
    	{
    		n_m = n_m*(i+1);
		}
    	way = n/(m*n_m);
		total_way = total_way+way;
		twostep_time=twostep_time+1;
		n = 1;
		m = 1;
		n_m = 1;
	}
	printf("There are %d ways to ascending the steps\n", total_way);
    return 0;
}
