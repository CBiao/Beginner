//The 3n + 1 problem

//还是不可以；
#include <stdio.h>
int a[1000000];
int main()
{
	int i, j, n, k, t, max;
	for(i=1;i<1000000;i++){
		n = i;
		t = 1;
		while(n!=1){
			n = n%2?3*n+1:n/2;
			t++;
		}
		a[i] = t;
	}
	while(scanf("%d %d", &i, &j)==2){
		max = 0;
		for(k=i;k<=j;k++){
			max = max>a[i]?max:a[i];
		}
		printf("%d %d %d\n", i, j, max);
	}
	return 0;
}






//1 999999时不可行
#include <stdio.h>

int main()
{
	int i, j, k, max, t, n;
	while(scanf("%d %d", &i, &j)==2){
		max = 0;
		for(k=i;k<=j;k++){
			t = 1;
			n = k;
			while(n!=1){
				n = n%2?3*n+1:n/2;
				t++;
			}
			max = max>t?max:t;
		}
		printf("%d %d %d\n", i, j, max);
	}
	return 0;
}
