//神、上帝以及老天爷
#include <stdio.h>

int mian()
{
	int c, n;
	long long f[21];
	f[0] = f[1] = 1;
	for(i=2;i<=20;i++){
		f[i] = i*f[i-1];
	}
	scanf("%d", &c);
	while(c--){
		scanf("%d", &n);
		printf("%.2f%%\n", 100.0/f[n-1]-100.0/f[n]);
	}
	return 0;
}
