#include <stdio.h>

int main()
{
	int a, b, c, d;

    for(a=1;a<=9;a++)
		for(b=1;b<=9;b++)
			for(c=1;c<=9;c++)
				for(d=1;d<=9;d++)
					if((10*a+b)*(10*c+d)==(10*b+a)*(10*d+c))
						printf("%d\n", 1000*a+100*b+10*c+d);
	return 0;
}
