#include <stdio.h>

int fac(int x)
{
	int i,f=1; 
	for(i=1;i<x+1;i++)
	{
		f=f*i;
	}
	return f;
}
 
float sinx(float x)
{
	float c=1, sinx=0;
	int i;
	for(i=1;c!=sinx;i++)
	{
		
		c=sinx;
		sinx+=pow(-1,i-1)*pow(x,2*i-1)/fac(2*i-1);
	}
	return sinx;
}

int main() 
{
	float x;
	scanf("%f",&x);
	printf("%f",sinx(x));
	return 0;
}

