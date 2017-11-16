#include <stdio.h>

int main()
{
	int i, j, h;
	for(i=0; i<=100/5;i++)
		for(j=0;j<=100/3;j++)
			for(h=0;h<=100;h++)
				if(i+j+h*3==100&&i*5+j*3+h==100)
					printf("公鸡:%2d只	母鸡:%2d只	小鸡:%2d只\n",i, j, h*3);
	return 0;
}
