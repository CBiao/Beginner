#include <stdio.h>

int main()
{
	int i;
	for(i=1;;i++)
	{
		if((i+3)%5==0&&(i-3)%6==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
