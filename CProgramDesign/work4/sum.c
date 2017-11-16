#include <stdio.h>

int main()
{
	int sign=1;
	double s=0, i;
	for(i=1;i<=40;i++)
	{
		s = s+sign/i;
		sign = -1*sign;
	}
	printf("%lf",s);

	return 0;
}

/*

#include <stdio.h>
int main()
{
	int sign=1;
	double s=0, i=1;
	while(i<=40)
	{
		s = s+sign/i;
		sign = -1*sign;
		i++;
	}
	printf("%lf",s);
	return 0;
}
*/
