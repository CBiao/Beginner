#include <stdio.h>

int pn(int n);

int main()
{
	int n;
	while(scanf("%d", &n)==1){
		if(pn(n))	printf("yes\n");
		else printf("no\n");
	}
	return 0;
}

int pn(int n)
{
	int i, y = 0;
	for(i=1;i<n;i++){
		if(n%i==0) y+=i;
	}
	if(y==n)	return 1;
	return 0;
}
