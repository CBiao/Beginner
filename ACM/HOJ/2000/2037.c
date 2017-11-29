//今年暑假不AC
#include <stdio.h>

int main()
{
	int s[100], e[100], a[100];
	int n, i, j, ts, sum, t, min;
	while(scanf("%d", &n)==1&&n){
		for(i=0;i<100;i++){
			a[i] = 0;
		}
		for(i=0; i<n;i++){
			scanf("%d %d", &s[i], &e[i]);
			a[i] = 1;
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(s[j]>s[j+1]){
					t = s[j];
					s[j] = s[j+1];
					s[j+1] = t;
					t = e[j];
					e[j] = e[j+1];
					e[j+1] = t;
 				}
			}
		}

		for(i=0;i<n-1;i++){
			ts = s[i];
			min = i;
			for(j=i+1;s[j]==ts;j++){
				if(e[min]>=e[j]){
					a[min] = 0;
					min = j;
				}
				else{
					a[j] = 0;
				}
			}
		}


		for(i=0;i<n-1;i++){
			for(j=i+1;j<n&&a[i];j++){
				if(e[i]>=e[j]&&a[j]){
					a[i] = 0;
				}
			}
		}
		for(i=0;i<n-1;i++){
            for(j=i+1;j<n&&a[i];j++){
				if(s[j]<e[i]&&a[j]){
					a[j] = 0;
				}
			}
		}


		sum = 0;
		for(i=0;i<n;i++){
			if(a[i]) sum++;
		}
		printf("%d\n", sum);
	}
	return 0;
}
