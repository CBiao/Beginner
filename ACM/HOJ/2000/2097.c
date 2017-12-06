//Sky数
#include <stdio.h>

int d(int a)
{
	int x = a, y = 0;
	while(x){
		y += x%10;
		x = x/10;
	}
	return y;
}

int b(int a)
{
	int x = a, y = 0;
	while(x){
		y += x%12;
		x = x/12;
	}
	return y;
}

int x(int a)
{
	int x = a, y = 0;
	while(x){
		y += x%16;
		x = x/16;
	}
	return y;
}

int main()
{
	int a;
	while(scanf("%d", &a)==1&&a){
		if(d(a)==b(a)&&x(a)==b(a))	printf("%d is a Sky Number.\n", a);
		else printf("%d is not a Sky Number.\n", a);
	}
	return 0;
}
