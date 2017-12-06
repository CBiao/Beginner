//u Calculate e

#include <stdio.h>

int fact(int n)
{
	if(n==0||n==1)	return 1;
	return n*fact(n-1);
}

int main()
{
	double e[10];
	int i;
	e[0] = 1;
	for(i=1;i<10;i++){
		e[i] = e[i-1] + 1.0/fact(i);
	}
	printf("n e\n- -----------\n");
	for(i=0;i<2;i++){
		printf("%d %d\n", i, (int)e[i]);
	}
	printf("%d %.1f\n", 2, e[2]);
	for(i=3;i<10;i++){
		printf("%d %0.9f\n", i, e[i]);
	}
	return 0;
}
