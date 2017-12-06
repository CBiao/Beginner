//Digit Generator, ACM/ICPC Seoul 2005, UVa1583
#include <stdio.h>
int a[100000];


int search(int a[], int n)
{
	int i;
	for(i=1;i<n;i++){
		if(a[i]==n){
			return i;
		}
	}
	return 0;
}

int yuan(int i)
{
	int y = i;
	while(i){
		y += i%10;
		i /= 10;
	}
	return y;
}

int main()
{
	int i, n;
	for(i=0;i<100000;i++){
		a[i] = yuan(i);
	}
	while(scanf("%d", &n)==1){
		printf("%d\n", search(a, n));
	}
	return 0;
}
