#include <stdio.h>
int main() {
	int i;
	int a, b, c;//a个位 b十位 c百位 
	for(i=100; i<1000; i++)
	{
		a = i%10;
		b = i%100/10;
		c = i/100;
		if(i==a*a*a+b*b*b+c*c*c)
		{
			printf("%d\n",i); 
		} 
	}
	return 0;
}

