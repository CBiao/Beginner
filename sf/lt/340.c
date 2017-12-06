//Master-Mind-Hints
#include <stdio.h>

int right(int a[], int b[], int n)
{
	int i, r = 0;
	for(i=0;i<n;i++){
		if(a[i]==b[i])	r++;
	}
	return r;
}


int main()
{
	int a[20], b[20], n, i, j, k, game=0, r, w, ra, rb;
	while(scanf("%d", &n)==1){
		for(i=0;i<n;i++)	scanf("%d", &a[i]);
		printf("Game %d:\n", ++game);
		while(1){
			for(i=0;i<n;i++)	scanf("%d", &b[i]);
			w = 0;
			if(!b[0])	break;
			r = right(a, b, n);
			for(j=1;j<=9;j++){
				ra = rb = 0;
				for(k=0;k<n;k++){
					if(a[k]==j) ra++;
					if(b[k]==j) rb++;
				}
				w += ra>rb?rb:ra;
			}
			printf("    (%d,%d)\n", r, w-r);
		}
	}
	return 0;
}
