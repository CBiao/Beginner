#include <stdio.h>

int main()
{
	int a, b, c;
	for(a=1;a<=9;a++)
		for(b=1;b<=9;b++)
			for(c=1;c<=9;c++)
				a*100+b*10+c+c*100+b*10+a==1333?
                    printf("a:%d	b:%d	c:%d\n", a, b, c):0;
	return 0;
}
