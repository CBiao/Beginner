//FatMouse的贸易
#include <stdio.h>

void rank(double a[], int b[], int c[], int n);

int main()
{
	int j[1000], f[1000];
	double p[1000], b;
	int m, n, i;
	while(scanf("%d %d", &m, &n)==2&&m!=-1){
		b = 0;
		for(i=0;i<n;i++){
			scanf("%d %d", &j[i], &f[i]);
			p[i] = (double)j[i]/f[i];
		}
		rank(p, j, f, n);
		for(i=0;i<n;i++){
			if(m>f[i]){
				m -= f[i];
				b += j[i];
			}
			else{
				b += (double)j[i]*m/f[i];
				break;
			}
		}
		printf("%.3f\n", b);
	}
	return 0;
}

void rank(double a[], int b[], int c[], int n)
{
	int i, j, t2;
	double t1;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				t1 = a[j];
				a[j] = a[j+1];
				a[j+1] = t1;
				t2 = b[j];
				b[j] = b[j+1];
				b[j+1] = t2;
				t2 = c[j];
				c[j] = c[j+1];
				c[j+1] = t2;
			}
		}
	}
}
