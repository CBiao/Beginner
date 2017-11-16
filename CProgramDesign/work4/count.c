#include <stdio.h>

int main()
{
	int po=0, ne=0, ze=0;
	int n, i;
	double num;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
	    scanf("%lf",&num);
		if(num>0) po++;
		else if(num==0) ze++;
		else ne++;
	}
	printf("positive:%d zero:%d negative:%d\n", po, ze, ne );
}
